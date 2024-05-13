import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        try {
            while (true) {
                int first_number = (int) (Math.random() * 50);
                int second_random = (int) (Math.random() * 20);

                try (
                Scanner input = new Scanner(System.in)) {
                    System.out.print("\nWhat is " + first_number + " + " + second_random + ":  ");

                    int answer = input.nextInt();
                    if (first_number + second_random == answer) {
                        System.out.println("\nYou got it!");
                        break;
                    } else {
                        System.out.println("\nThat's Wrong Answer!.");
                        System.out.println("Try again");
                    }
                }catch (Exception e) {
                    e.printStackTrace();
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
// Thanks for watching Me.