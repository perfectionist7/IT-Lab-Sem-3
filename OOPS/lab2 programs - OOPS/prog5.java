import java.util.Scanner;
class prog5 {
    public static void main(String args[]) {
        Scanner dis = new Scanner(System.in);

        char a = 'y';
        double val =0.0;
        while(a=='y') {
            System.out.println("Enter the first number ");
            double num1 = dis.nextDouble();
            System.out.println("Enter the second number ");
            double num2  = dis.nextDouble();
            System.out.println("Enter the operation to be performed ");
            char c1 = dis.next().charAt(0);
            switch(c1) {
                case '+':
                val = num1+num2;
                break;

                case '-':
                val = num1-num2;
                break;

                case '*':
                val = num1*num2;
                break;

                case '/':
                val = num1/num2;
                break;
            }
            System.out.println("The Answer is "+val);
            System.out.println("Do you wish to continue? (y/n) ");
            a = dis.next().charAt(0);

        }
    }
}