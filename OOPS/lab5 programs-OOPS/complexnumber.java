import java.util.Scanner;
class complexnumber {
    double complex[] = new double[2];
    int integer;
    void add(int integer, double[] d1) {
        this.complex[0] = d1[0] + integer;
        this.complex[1] = d1[1];
    }
    void add(double [] d1, double[] d2) {
        this.complex[0] = d1[0] + d2[0];
        this.complex[1] = d1[1] + d2[1];
    }
    void display() {
        System.out.println(this.complex[0]);
        System.out.println(this.complex[1]);
    }
    public static void main(String args[]) {
        complexnumber complex = new complexnumber();
        complexnumber complex2 = new complexnumber();
        double[] d1 = {10.23,6.2};
        double[] d2 = {4.2,5.1};
        complex.add(12,d1);
        complex2.add(d1,d2);
        complex.display();
        complex2.display();
        
    }
}