import java.util.Scanner;
class add2 {
    public static void main(String args[]) {
        Scanner dis = new Scanner(System.in);
        int sum=1;
        System.out.println("Enter the number ");
        int n = dis.nextInt();
        for(int i=1; i<n;i++) {
            sum = sum*i;
        }
        System.out.println("The factorial of the number is "+sum);
    }
}