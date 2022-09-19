import java.util.Scanner;
class employee {
  
    String name,city;
    int basicsalary;
    double hra,da,total;

    void getdata() {
        Scanner dis = new Scanner(System.in);
        System.out.println("Enter the employee's name: ");
        name = dis.nextLine();
        System.out.println("Enter the city: ");
        city = dis.nextLine();
        System.out.println("Enter the basic salary: ");
        basicsalary = dis.nextInt();
        System.out.println("Enter the House Rent Allowance(%): ");
        hra = dis.nextDouble();
        System.out.println("Enter the Dearness Allowance(%): ");
        da = dis.nextDouble();
        dis.close();
    }
    void calculate() {
        total =  basicsalary+(basicsalary*da/100.0)+(basicsalary*hra/100.0);
    }
    double display() {
        return total;
    }
    public static void main(String args[]) {
        employee obj1 = new employee();
        obj1.getdata();
        obj1.calculate();
        System.out.println("The total salary is - ");
        System.out.println(obj1.display());
    }

    
}