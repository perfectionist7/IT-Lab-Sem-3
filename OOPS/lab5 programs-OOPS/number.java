import java.util.Scanner;
public class number {
    int num;
    number() {
        num = 0;
    }
    void getdata() {
        Scanner dis = new Scanner(System.in);
        System.out.println("Enter the number: ");
        num = dis.nextInt();
    }
    boolean isZero() {
        if(num==0) {
            return true;
        }
        else {
            return false;
        }
    }
    boolean isNegative() {
        if(num<0) {
            return true;
        }
        else {
            return false;
        }
    }
    boolean IsPositive() {
        if(num>0) {
            return true;
        }
        else {
            return false;
        }
    }
    boolean IsOdd() {
        if(num%2!=0) {
            return true;
        }
        else {
            return false;
        }
    }
    boolean IsEven() {
        if(num%2==0) {
            return true;
        }
        else {
            return false;
        }
    }
    boolean IsPrime() {
        int sum = 0;
        for(int i=2; i<num; i++) {
            if(num%i==0) {
                sum = 1;
                break;
            }
        }
        if(sum==0) {
            return true;
        }
        else {
            return false;
        }
    }
    boolean isArmstrong() {
        int k = num;
        int sum = 0;
        while(num>0) {
            int digit = num%10;
            sum = sum + digit*digit*digit; 
            num = num/10;
        }
        if(k==sum) {
            return true;
        }
        else {
            return false;
        }
    }
    public static void main(String args[]) {
        number obj1 = new number();
        obj1.getdata();
        System.out.println("ZERO ---> " +obj1.isZero());
        System.out.println("POSITIVE ---> " +obj1.IsPositive());
        System.out.println("NEGATIVE ---> " +obj1.isNegative());
        System.out.println("PRIME ---> " +obj1.IsPrime());
        System.out.println("EVEN ---> " +obj1.IsEven());
        System.out.println("ODD ---> " +obj1.IsOdd());
        System.out.println("ARMSTRONG ---> " +obj1.isArmstrong());

    }
}
