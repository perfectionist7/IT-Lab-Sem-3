import java.util.Scanner;
class Number {
    public static void main(String args[]) {
        int arr[] = new int[10];
        int positive=0;
        int negative = 0;
        int zero = 0;
        Scanner dis = new Scanner(System.in);
        for(int i=0; i<arr.length;i++) {
            System.out.println("Enter the numbers");
            arr[i] = dis.nextInt();
            if(arr[i] > 0) {
                positive++;
            }
            else if(arr[i] < 0) {
                negative++;
            }
            else {
                zero++;
            }
        }
        System.out.println("Number of positive nos: "+positive);
        System.out.println("Number of negative nos: "+negative);
        System.out.println("Number of zeros: "+zero);
    }
}