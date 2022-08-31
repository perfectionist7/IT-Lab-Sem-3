import java.util.Scanner;
class prog1{
    public static void main(String args[]){
        Scanner dis=new Scanner(System.in);
        System.out.println("Enter the year");
        int year =dis.nextInt();
        boolean a=year%4!=0,b=year%100!=0,c=year%400!=0;
        if(a){
            System.out.println("It is a common year.");
        }
        else if(b){
            System.out.println("It is a leap year.");
        }
        else if(c){
            System.out.println("It is a common year.");
        }
        else{
            System.out.println("It is a leap year.");

        }

    }
}