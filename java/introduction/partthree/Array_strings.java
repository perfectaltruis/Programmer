import java.util.Arrays;

public class Main {
    public static void main(String[] args){
        String[] friends = {"perfect", "perfumes", "son"};
        System.out.println(Arrays.toString(friends));
    }
}


/*
When you directly print an array in Java using
System.out.println(), it doesn't print the content of the array but instead prints the object reference.

To print the contents of the array, you need to loop through
 the elements and print them individually or use Arrays.toString() method.

 This will print:

csharp

[perfect, perfumes, son]

In this modified code, Arrays.toString(friends) converts the array friends
into a human-readable string representation which includes the contents of the array.
 */