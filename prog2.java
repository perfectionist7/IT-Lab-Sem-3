import java.util.Scanner;
class prog2 {
    public static void main(String args[]) {
        Scanner dis = new Scanner(System.in);
        System.out.println("Enter the number of rows of the matrix: ");
        int n = dis.nextInt();
        System.out.println("Enter the number of columns of the matrix: ");
        int m = dis.nextInt();
        System.out.println("Enter the elements of the matrix: ");
        int arr[][] = new int[n][m];
        int sum = 0;
        for(int i=0; i<n;i++) {
            for(int j=0; j<m;j++) {
                arr[i][j] = dis.nextInt();
                if(i==j) {
                    sum = sum+arr[i][j];
                }
            }
        }
        System.out.println("The diagonal elements are: ");
         for(int i=0; i<n;i++) {
            for(int j=0; j<m;j++) {
                if(i==j) {
                    System.out.println(arr[i][j]);
                }
            }
        }
        System.out.println("The sum of the diagonal elements = "+sum);
    }
}