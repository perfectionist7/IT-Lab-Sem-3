import java.util.Scanner;
public class add5{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter no of rows");
int n=sc.nextInt();
System.out.println("Enter no of columns");
int m=sc.nextInt();
System.out.println("Enter elements");
int arr[][]=new int[n][m];
double sum=0.0,norm=0.0,trace=0.0;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
arr[i][j]=sc.nextInt();
sum+=arr[i][j];
if(i==j)
trace+=arr[i][j];
}
}
norm=Math.sqrt(sum);
System.out.println("Norm of the matrix: "+norm);
System.out.println("Trace of the matrix: "+trace);
}
}



