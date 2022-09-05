import java.util.Scanner;
class prog3 {
    public static void main(String args[]) {
        Scanner dis = new Scanner(System.in);
        System.out.println("Enter the number of rows of the matrix: ");
        int n = dis.nextInt();
        System.out.println("Enter the number of columns of the matrix: ");
        int m = dis.nextInt();
        System.out.println("Enter the elements of the matrix: ");
        int arr[][] = new int[n][m];
        int arr2[][] = new int[n][m];
        int count = 0;
        for(int i=0; i<n;i++) {
            for(int j=0; j<m;j++) {
                arr[i][j] = dis.nextInt();
                arr2[j][i] = arr[i][j];
              }
        }
        for(int i=0; i<n;i++) {
            for(int j=0; j<m; j++) {
                if(arr2[i][j]!=arr[i][j]) {
                    count++;
                    break;
                }
            }
        }
        if(count ==1) {
            System.out.println("The matrix is not symmetric");
        }
        else {
            System.out.println("The matrix is symmetric");
        }
    }
}