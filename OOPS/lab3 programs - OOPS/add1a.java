import java.util.Scanner;
public class add1 {
    public static void main(String args[]) {
        Scanner dis = new Scanner(System.in);
        System.out.println("Enter the four digit number ");
        int p = dis.nextInt();
        int n = p;
        int digit[] = new int[4];
        for(int i=0;i<4;i++) {
            digit[i] = p%10;
            p = p/10;
        }
        for(int i=0; i<4; i++) {
            for(int j=0; j<4; j++) {
                for(int k=0; k<4; k++) {
                    for(int l=0; l<4; l++) {
                        if(i!=j && j!=k && i!=k) {
                        System.out.println(digit[l]+""+digit[k]+""+digit[j]+""+digit[i]);
                    }
                }
            }

        }
        

        }
    }
}

