import java.util.Scanner;
class prog1 {
    public static void main(String args[]) {
        Scanner dis = new Scanner(System.in);
        System.out.println("Enter the number ");
        int n = dis.nextInt();
        int k = n;
        int digit = 0,sum=0;
        while(n>0) {
            digit = n%10;
            sum = sum + digit*digit*digit;
            n = n/10;
        }
        if(sum == k ) {
            System.out.println("This is an Armstrong Number ");
        }
        else {
            System.out.println("This is not an Armstrong Number ");
        }
    }
}