import java.util.Scanner;
class add3 {
    public static void main(String args[]) {
        Scanner dis = new Scanner(System.in);
        System.out.println("Enter the length of the matrix ");
        int n = dis.nextInt();
        System.out.println("Enter the target element ");
        int x = dis.nextInt();
        System.out.println("Enter the elements of the matrix ");
        int arr[] = new int[n];
        int count = 0;
        for(int i=0; i<n; i++){
            arr[i] = dis.nextInt();
            if(x==arr[i]) {
                count++;
            }
        }
        System.out.println("The number of occurences of the target element are "+count);
    }
}