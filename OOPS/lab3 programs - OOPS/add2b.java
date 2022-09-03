import java.util.Scanner;
public class add2b {


    public static void main(String args[]) {
        System.out.println("Enter the number of terms in the series");
        Scanner dis = new Scanner(System.in);
        int n = dis.nextInt();
        double i;
        double sum = 0.0;
        for(i=1;i<=n;i++) {
            sum = sum + Math.pow((1/i),i);
        }
        System.out.println(sum);
    }
}
