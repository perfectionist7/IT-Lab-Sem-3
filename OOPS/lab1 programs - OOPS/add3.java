import java.util.Scanner;
public class add3 {
    public static void main(String args[]) {
        System.out.println("Enter a number ");
        Scanner dis = new Scanner(System.in);
        int n = dis.nextInt();
        for(int i=1; i<=10; i++) {
            System.out.println(n + " * " + i + " = " + n*i);
        }
    }
}
