import java.util.Scanner;
public class prog4{
    public static void main(String args[]){
        int m,n,p,q;
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter the size of the matrix A:");
        m=scan.nextInt();
        n=scan.nextInt();
        System.out.println("Enter the size of the matrix B:");
        p=scan.nextInt();
        q=scan.nextInt();


        if(n!=p){
            System.out.println("Matrices cannot be multiplied!");
            java.lang.System.exit(0);
        }

        System.out.println("Enter the elements of matrix A: ");
        int a[][]=new int[m][n];
        int b[][]=new int[p][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[i][j]=scan.nextInt();
            }
        }
        
        System.out.println("Enter the elements of matrix B: ");
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                b[i][j]=scan.nextInt();
            }
        }


        int c[][]=new int[m][q];
        int d[][] = new int[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                c[i][j]=0;
                for(int k=0;k<n;k++){
                    c[i][j]+=a[i][k]*b[k][j];}
            }
        }
        System.out.println("Matrix on multiplying: ");
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                d[i][j] = a[i][j] + b[i][j];
                System.out.print(c[i][j]+" ");
            }
            System.out.println();
        }
        System.out.println("Matrix on adding: ");
        for(int i=0;i<m;i++) {
            for(int j=0;j<q;j++) {
                System.out.print(d[i][j] + " ");
            }
            System.out.println();
        }
        scan.close();
    }
}