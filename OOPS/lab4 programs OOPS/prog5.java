import java.util.Scanner;
public class prog5{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
int n,m,flag=0;
System.out.println("Enter no of rows:");
n=sc.nextInt();
System.out.println("Enter no of columns:");
m=sc.nextInt();
int M=(int)(n*((Math.pow(n,2)+1)/2));
int arr[][]=new int[n][m];

int rowsum=0,columnsum=0;
int s1=0,s2=0;

System.out.println("Enter elements:");
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
arr[i][j]=sc.nextInt();

}
}



for(int i=0;i<n;i++){
rowsum=0;
columnsum=0;

for(int j=0;j<m;j++){
rowsum+=arr[i][j];

columnsum+=arr[j][i];

if(i==j){
    s1+=arr[i][j];
}
if(j==n-i-1){
s2+=arr[i][n-i-1];
}
}
if(M!=rowsum||M!=columnsum)
{
flag=1;
break;
}
}
if(M!=s1||M!=s2){
flag=1;
}
if(flag==1){
    System.out.println("NOT MAGIC MATRIX");

}
else 
 System.out.println("MAGIC MATRIX");




}
}