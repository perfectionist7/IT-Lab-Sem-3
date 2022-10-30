abstract class Area {
    double arr;
    abstract double area();
    void display() {
        area();
        System.out.println(arr);
    }

}

class Circle extends Area {

    double radius;
    Circle(double radius) {
        this.radius = radius;
    }
    public double area() {
        arr = 3.14*radius*radius;
        return arr;
    }
}

class Rectangle extends Area {
    double length;
    double breadth;
    Rectangle(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }
    public double area() {
        arr = length*breadth;
        return arr;
    }
}
class lab8_2 {
    public static void main(String args[]) {
        Rectangle r = new Rectangle(12.9, 20.1);
        Circle c = new Circle(12.2);
        r.display();
        c.display();
    }
}