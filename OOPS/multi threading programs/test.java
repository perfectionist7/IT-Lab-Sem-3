import java.util.Scanner;
public class test {
    public static void main(String args[]) {
        int n,m;
        System.out.println("Enter the number of rows: ");
        Scanner dis = new Scanner(System.in);
        n = dis.nextInt();
        System.out.println("Enter the number of columns: ");
        m = dis.nextInt();
        int[][] mat = new int[n][m];
        System.out.println("Enter the elements of the matrix: ");
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                mat[i][j] = dis.nextInt();
            }
        }
        new diagonalsum("diagonal thread", mat, n, m);
        new checkprime("prime thread", mat, n, m);

    }
    
}
class diagonalsum extends Thread {
    Thread t;
    int n;
    int m;
    int sum;
    int[][] mat = new int[n][m];
    diagonalsum(String threadname,int mat[][],int n,int m) {
        this.mat = mat;
        this.n = n;
        this.m = m;
        t = new Thread(this,threadname);
        System.out.println("New thread created: "+t);
        t.start();
    }
    public void run() {
        try {
            for(int i=0; i<n; i++) {
                for(int j=0; j<m; j++) {
                    if(i==j) {
                        sum = sum + mat[i][j];
                    }
                }
            }
            Thread.sleep(1000);
            System.out.println("The diagonal sum is "+sum);
        }
        catch(InterruptedException e) {
            System.out.println("Diagonal sum exception interrupted!");
        }
    }
}
class checkprime extends Thread {
    Thread t;
    int n;
    int m;
    int res;
    int[][] mat = new int[n][m];
    checkprime(String threadname, int mat[][], int n, int m) {
        this.mat = mat;
        this.n = n;
        this.m = m;
        t = new Thread(this,threadname);
        System.out.println("New thread created: "+t);
        t.start();
    }
    public void run() {
        System.out.println("The prime elements are: ");
        try {
            for(int i=0; i<n; i++) {
                for(int j=0; j<m; j++) {
                    if(i==j) {
                    res=3;
                    for(int k=2; k<mat[i][j]; k++) {
                        if(mat[i][j]%k==0) {
                            res=1;
                            break;
                        }
                    }
                    if(res==3 && mat[i][j] !=0 && mat[i][j] !=1) {
                        System.out.print(mat[i][j]+" ");
                    }
                }
                }
            }
            System.out.println();
            Thread.sleep(1000);
        }
        catch(InterruptedException e) {
            System.out.println("Prime thread interrupted!");
        }
        
    }
}