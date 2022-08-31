import java.util.Scanner;
class add1 {
    public static void main(String args []) {
        Scanner dis = new Scanner(System.in);
        System.out.println("Enter the first number ");
        int a = dis.nextInt();
        System.out.println("Enter the second number ");
        int b = dis.nextInt();
        int val;
        boolean val2;
        val = (a<<2) + (b>>2);
        System.out.println("The value of (a<<2) + (b>>2) is "+val);
        val2 = b>0;
        System.out.println("The value of (b>0) is "+val2);
        val = (a+b*100)/10;
        System.out.println("The value of (a+b*100)/10 is "+val);
        val = a & b;
        System.out.println("The value of a&b is "+val);

    }
}