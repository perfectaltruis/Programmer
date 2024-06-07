import java.util.Scanner;

/*
 * GROUP MEMBERS:
 * TITO M. JOCTAN: BCSe-01-0162
 * FILIMATUS PASCHAL ANDREA: BCSE-01-0099-2022
 * MAUREEN ALPHONCE MAGAMBO: BCSe-01-0130-2022
 * JEREMIAH HONEST LYMIMO  : BCSe-01-0062-2022
 * AMEDEUS BENEDICT MBORE  : BCSe-01-0032-2022
 */
public class BasicCalculator implements ICalculator {

    // member fields
    private int firstOperand;
    private int secondOperand;
    private int answer;
    private double dAnswer;
    private double[] recallArray;

    // constructor
    public BasicCalculator(int memorySize){
        // default values
        firstOperand = 0;
        secondOperand = 0;
        answer = 0;
        dAnswer = 0.0;
        //memory array with the specified size
        recallArray = new double[memorySize];
    }

    // class methds
    // addition operation
    @Override
    public int addition(int a, int b){
        return a + b;
    }

    // subtraction operation
    @Override
    public int subtraction(int a, int b){
        return a - b;
    }

    // multiplication operation
    @Override
    public int multiplication(int a, int b){
        return a * b;
    }

    // division operation
    @Override
    public double division(int numerator, int denominator){
        // Check for division by zero
        if (denominator == 0){
            System.out.println("You cannot divide by 0");
            return 0.0;
        } else {
            return numerator / (double) denominator;
        }
    }

    // calculate square root
    @Override
    public double squareRoot(int a){
        return Math.sqrt(a);
    }

    // setter
    @Override
    public void setFirstOperand(int a){
        firstOperand = a; // first operand
    }

    @Override
    public void setSecondOperand(int b){
        secondOperand = b; //second operand
    }

    @Override
    public void setAnswer(int a){
        answer = a; // integer answer
    }

    @Override
    public void setdAnswer(double b){
        dAnswer = b; // double answer
    }

    // getters
    @Override
    public int getFirstOperand(){
        return firstOperand; // first operand
    }

    @Override
    public int getSecondOperand(){
        return secondOperand; // second operand
    }

    @Override
    public int getAnswer(){
        return answer; // integer answer
    }

    @Override
    public double getdAnswer(){
        return dAnswer; // double answer
    }

    // store answer in memory array
    @Override
    public void store(int i, double value){
        recallArray[i] = value;
    }

    // recall answers from memory array
    @Override
    public void recall(int maxIndex){
        for (int i = 0; i < maxIndex; i++){
            System.out.println(recallArray[i]);
        }
    }

    // Method Overloading
    // output integer answer with operator
    public void output(int a, int b, String operator, int answer){
        System.out.println(a + " " + operator + " " + b + " = " + answer);
    }

    // output double answer with operator
    public void output(int a, int b, String operator, double answer){
        System.out.println(a + " " + operator + " " + b + " = " + answer);
    }

    // output square root result
    public void output(int a, String operator, double dAnswer){
        System.out.println(operator + " " + a + " = " + dAnswer);
    }
}
