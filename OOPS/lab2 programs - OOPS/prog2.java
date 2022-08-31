import java.util.Scanner;
class prog2 {
    public static void main(String args[]) {
        int num1;
        double num2;
        char c1;
        Scanner dis = new Scanner(System.in);
        num1 = dis.nextInt();
        num2 = dis.nextDouble();
        c1 = dis.next().charAt(0);
        System.out.println("Int to Byte is "+(byte)num1);
        System.out.println("Char to Int is "+(int)c1);
        System.out.println("Double to Byte is "+(byte)num2);
        System.out.println("Double to Int is "+(int)num2);
    }
}