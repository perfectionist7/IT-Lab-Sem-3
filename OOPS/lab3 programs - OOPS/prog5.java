import java.util.Scanner;
public class prog5 {
    public static void main(String args[]) {
        Scanner dis = new Scanner(System.in);
        System.out.println("Enter the length of the array ");
        int n = dis.nextInt();
        int arr[] = new int[n];
        for(int i=0; i<n;i++) {
            System.out.println("Element at index " + i + ":");
            arr[i] = dis.nextInt();
        }
        System.out.println("Value to be seached: ");
        int m = dis.nextInt();
        int sum = 0;
        for(int k : arr ) {
            if(k==m) {
                System.out.println("Element found at index: "+sum);
            }
            sum++;
        }
    }
}
