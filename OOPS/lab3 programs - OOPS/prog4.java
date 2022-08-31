import java.util.Scanner;
public class prog4 {
    public static void main(String args[]) {
        Scanner dis = new Scanner(System.in);
        System.out.println("Enter the starting value ");
        int n = dis.nextInt();
        System.out.println("Enter the ending value ");
        int m = dis.nextInt();
        for(int i = n; i<=m; i++) {
            int result = 0;
            for(int j=2; j<i; j++) {
                if(i%j==0) {
                    result = 1;
                    break;
                }
            }
            if(result == 0 && i!=1) {
                System.out.println(i);
                
            }
        }
    }
}
