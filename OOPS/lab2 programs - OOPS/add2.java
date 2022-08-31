import java.util.Scanner;
class add2 {
    public static void main(String args[]) {
        Scanner dis = new Scanner(System.in);
        System.out.println("Enter the first number ");
        int num1 = dis.nextInt();
        System.out.println("Enter the second number ");
        int num2 = dis.nextInt();
        System.out.println("Enter the third number ");
        int num3 = dis.nextInt();
        int max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
        int min = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);
        System.out.println("The largest number is "+max);
        System.out.println("The smallest number is "+min);
    }
}