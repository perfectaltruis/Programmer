
public interface ICalculator {
    /*
 * GROUP MEMBERS:
 * TITO M. JOCTAN: BCSe-01-0162
 * FILIMATUS PASCHAL ANDREA: BCSE-01-0099-2022
 * MAUREEN ALPHONCE MAGAMBO: BCSe-01-0130-2022
 * JEREMIAH HONEST LYMIMO  : BCSe-01-0062-2022
 * AMEDEUS BENEDICT MBORE  : BCSe-01-0032-2022
 */

    // method signatures for
    // basic arithmetic operations
    int addition(int a, int b);
    int subtraction(int a, int b);
    int multiplication(int a, int b);
    double division(int numerator, int denominator);
    double squareRoot(int a);

    // setter methods
    void setFirstOperand(int a);
    void setSecondOperand(int b);
    void setAnswer(int a);
    void setdAnswer(double b);

    // getter methods
    int getFirstOperand();
    int getSecondOperand();
    int getAnswer();
    double getdAnswer();

    // Calculator memory operations
    void store(int i, double value);
    void recall(int maxIndex);
}
