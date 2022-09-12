import java.util.Scanner;
class add1 {
    public static void main(String args[]) {
        System.out.println("Enter the length of the array: ");
        Scanner dis = new Scanner(System.in);
        int n = dis.nextInt();
        System.out.println("Enter the elements of array: ");
        int arr[] = new int[n];
        for(int i=0; i<n;i++) {
            arr[i] = dis.nextInt();
        }
        int count=0;
        System.out.println("The prime elements in the array are ");
        for(int i=0; i<n;i++) {
            for(int j=2; j<arr[i]; j++) {
                if(arr[i]%j==0) {
                    count++;
                    break;
                }
            }
            if(count==0) {
                System.out.println(arr[i]);
            }
        }
    }
}