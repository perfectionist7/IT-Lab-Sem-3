import java.util.Scanner;
class add1 {
    public static void main(String args[]) {
        Scanner dis = new Scanner(System.in);
        System.out.println("Enter the number ");
        int num1 = dis.nextInt();
        int num2 = num1;
        int digit;
        int rev = 0;
        while(num1 >0) {
            digit = num1%10;
            rev = rev*10 + digit;
            num1 = num1/10;
        }
        if(rev==num2) {
            System.out.println("The given number is a Palindrome");
        }
        else {
            System.out.println("The given number is not a Palindrome");
        }
    }
}