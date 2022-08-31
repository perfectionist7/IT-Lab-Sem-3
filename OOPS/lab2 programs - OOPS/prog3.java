import java.util.Scanner;
class prog3 {
    public static void main(String args[]) {
        Scanner dis = new Scanner(System.in);
        System.out.println("Enter a number ");
        int num = dis.nextInt();
        int mul = num << 1;
        int div = num >> 1;
        System.out.println("Multiplied by 2: "+mul);
        System.out.println("Divided by 2: "+div);
    }
}