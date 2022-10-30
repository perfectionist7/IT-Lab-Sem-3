interface Area {
    double area();
    double PI = 3.1416;
}
class Rectangle implements Area {
    double length;
    double breadth;
    double area;
    Rectangle(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }
    public double area() {
        area = length*breadth;
        return area;
    }
}
class Circle implements Area {
    double radius;
    double area;
    Circle(double radius) {
        this.radius = radius;
    }
    public double area() {
        area = PI * radius;
        return area;
    }
}
public class lab8_3 {
    public static void main(String args[]) {
        Area a = new Rectangle(4, 5);
        System.out.println(a.area());
        Area b = new Circle(22.2);
        System.out.println(b.area());
    }
}