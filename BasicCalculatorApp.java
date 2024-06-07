import java.util.Scanner;

/*
 * GROUP MEMBERS:
 * TITO M. JOCTAN: BCSe-01-0162
 * FILIMATUS PASCHAL ANDREA: BCSE-01-0099-2022
 * MAUREEN ALPHONCE MAGAMBO: BCSe-01-0130-2022
 * JEREMIAH HONEST LYMIMO  : BCSe-01-0062-2022
 * AMEDEUS BENEDICT MBORE  : BCSe-01-0032-2022
 */

public class BasicCalculatorApp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // choose calculator type
        System.out.println("Choose calculator type: \n1. Fast recall (array) \n2. Memory efficient recall (linked list)");
        int calculatorChoice = sc.nextInt();

        // instance of the chosen calculator type
        ICalculator calculator;

        if (calculatorChoice == 1) {
            calculator = new BasicCalculator(100); // Initialize with capacity 100
        } else {
            calculator = new ListBasicCalculator(); // Initialize a linked list calculator
        }

        // variables
        String choice;
        boolean stop = true;
        int itr = 0;

        //loops
        while (stop) {

            System.out.println("------------------------------------------------------------------");
            System.out.println("Select Operation from the list \n A. Addition \n B. Subtraction \n C. Multiplication" +
                    "\n D. Division\n E. Sqrt \n S. Stop \n R. Recall");
            sc.nextLine();
            choice = sc.nextLine();

            // perform the selected operation
            if (choice.equalsIgnoreCase("A")) {
                twoOperandInput(sc, calculator);
                calculator.setAnswer(calculator.addition(calculator.getFirstOperand(), calculator.getSecondOperand()));
                calculator.store(itr, calculator.getAnswer());
                itr++;
                output(calculator, "+");
            } else if (choice.equalsIgnoreCase("B")) {
                twoOperandInput(sc, calculator);
                calculator.setAnswer(calculator.subtraction(calculator.getFirstOperand(), calculator.getSecondOperand()));
                calculator.store(itr, calculator.getAnswer());
                itr++;
                output(calculator, "-");
            } else if (choice.equalsIgnoreCase("C")) {
                twoOperandInput(sc, calculator);
                calculator.setAnswer(calculator.multiplication(calculator.getFirstOperand(), calculator.getSecondOperand()));
                calculator.store(itr, calculator.getAnswer());
                itr++;
                output(calculator, "*");
            } else if (choice.equalsIgnoreCase("D")) {
                twoOperandInput(sc, calculator);
                calculator.setdAnswer(calculator.division(calculator.getFirstOperand(), calculator.getSecondOperand()));
                calculator.store(itr, calculator.getdAnswer());
                itr++;
                output(calculator, "/");
            } else if (choice.equalsIgnoreCase("E")) {
                oneOperandInput(sc, calculator);
                calculator.setdAnswer(calculator.squareRoot(calculator.getFirstOperand()));
                calculator.store(itr, calculator.getdAnswer());
                itr++;
                output(calculator, "Sqrt of");
            } else if (choice.equalsIgnoreCase("S")) {
                stop = false;
                System.out.println("Bye Bye, See you next time!");
            } else if (choice.equalsIgnoreCase("R")) {
                System.out.println("-----------------------------------------------------------------");
                calculator.recall(itr);
            } else {
                System.out.println("Wrong Choice, Try again!");
            }
        }
    }

    // take input for two operands
    public static void twoOperandInput(Scanner sc, ICalculator calculator) {
        // first operand
        System.out.println("Enter your first value");
        calculator.setFirstOperand(sc.nextInt());
        // second operand
        System.out.println("Enter your second value");
        calculator.setSecondOperand(sc.nextInt());
    }

    public static void oneOperandInput(Scanner sc, ICalculator calculator) {
        // user operand
        System.out.println("Enter your value");
        calculator.setFirstOperand(sc.nextInt());
    }

    // display operation output
    public static void output(ICalculator calculator, String operator) {
        if (operator.equals("Sqrt of")) {
            System.out.println(operator + " " + calculator.getFirstOperand() + " = " + calculator.getdAnswer());
        } else {
            System.out.println(calculator.getFirstOperand() + " " + operator + " " + calculator.getSecondOperand() + " = " + calculator.getAnswer());
        }
    }
}
