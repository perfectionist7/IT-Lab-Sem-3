import java.util.Scanner;
public class add2a {
    public static void main(String args[]) {
        System.out.println("Enter the number of terms in the series: ");
        Scanner dis = new Scanner(System.in);
        int n = dis.nextInt();
        System.out.println("Enter the value of x: ");
        double x = dis.nextDouble();
        double sum = 0.0;
        double i;
        for(i=1;i<=n;i++) {
            if(i%2==0) {
            sum = sum - (Math.pow(x,(2*i-1)))/(factorial(2*i-1));
            }
            else {
                sum = sum + ((int)Math.pow(x,(2*i-1)))/(factorial(2*i-1));
            }
        }
        System.out.println(sum);
    } 
    public static double factorial(double k) {
        if(k==0) {
            return 1;
        }
        else {
            return k * factorial(k-1);
        }
    }
}
