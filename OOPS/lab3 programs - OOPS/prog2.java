import java.util.Scanner;
public class prog2 {
    public static void main(String args[]) {
        System.out.println("Enter the length of the rectangle ");
        Scanner dis = new Scanner(System.in);
        int length = dis.nextInt();
        System.out.println("Enter the breadth of the rectangle ");
        int breadth = dis.nextInt();
        int circumference = 2*(length + breadth);
        int area = length * breadth;
        System.out.println("The circumference of the rectangle is "+circumference);
        System.out.println("The area of the rectangle is "+area);
    }
}
