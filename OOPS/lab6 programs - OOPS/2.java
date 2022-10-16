import java.util.Scanner;
class Student{
    Scanner dis= new Scanner(System.in);
    int regno;
    String name;
    int age;
    Student(){
        System.out.println("Enter the name of the student:");
        this.name = dis.nextLine();
        System.out.println("Enter the registration number of the student:");
        this.regno = dis.nextInt();
        dis.nextLine();
        System.out.println("Enter the age of the student:");
        this.name = dis.nextLine();
    }
}
class UG extends Student{
    int semester;
    double fees;
    UG(){
        super();
        System.out.println("Enter the semester:");
        this.semester = dis.nextInt();
        System.out.println("Enter the fees:");
        this.fees = dis.nextDouble();
    }
    void display(){
        System.out.println("The semester & fees are: ");
        System.out.println(semester);
        System.out.println(fees);
    }
}
class PG extends Student{
    int semester;
    double fees;
    PG(){
        super();
        System.out.println("Enter the semester:");
        this.semester = dis.nextInt();
        System.out.println("Enter the fees:");
        this.fees = dis.nextDouble();
    }
    void display(){
        System.out.println("The semester and fees are: ");
        System.out.println(semester);
        System.out.println(fees);
    }
}

class Second{
    public static void main(String args[]){
        UG u=new UG();
        PG p=new PG();
        u.display();
        p.display();
    }
}