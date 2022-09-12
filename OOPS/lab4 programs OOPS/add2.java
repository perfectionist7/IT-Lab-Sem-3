import java.util.Scanner;
public class add2{
public static void main (String args[]){
Scanner sc=new Scanner(System.in);
int small,large;
System.out.println("Enter no of elements");
int n=sc.nextInt();
int arr[]=new int[n];
 System.out.println("Enter elements of the array");

for(int i=0;i<n;i++){
arr[i]=sc.nextInt();
}
small=large=arr[0];
for(int i=0;i<n;i++){
if(small>arr[i])
small=arr[i];
if(large<arr[i])
large=arr[i];
}
 System.out.println("Smallest element in given array : "+small);
System.out.println("Largest element in given array : "+large);
}
}