import java.util.Scanner;
interface market{
    final Scanner dis = new Scanner(System.in);
    int sales();
}
class Hardware implements market {
    int category;
    String manufacture;
    Hardware() {
        System.out.println("Enter the category: ");
        category = dis.nextInt();
        System.out.println("Enter the manufacture: ");
        manufacture = dis.next();
    }
    public int sales() {
        return 44;
    }
}
class Software implements market {
    String type;
    String opsystem;
    Software() {
        System.out.println("Enter the type of the software: ");
        type = dis.next();
        System.out.println("Enter the operating system: ");
        opsystem = dis.next();
    }
    public int sales() {
        return 25;
    }
}
public class lab8_1 {
    public static void main(String args[]) {
        market a = new Hardware();
        System.out.println(a.sales());
        market b = new Software();
        System.out.println(b.sales());
    }
}