abstract class Area {
    double arr;
    abstract void area();
    void display() {
        area();
        System.out.println(arr);
    }
}
class Square extends Area {
    int side;
    Square(int side) {
        this.side = side;
    } 
    public void area() {
        arr = side*side;
    }
}
class Triangle extends Area {
    int base;
    int height;
    Triangle(int base, int height) {
        this.base = base;
        this.height = height;
    }
    public void area() {
        arr =  (base * height)/2;
    }
}
public class add1 {
    public static void main(String args[]) {
        Square s = new Square(4);
        Triangle t = new Triangle(4, 7);
        s.display();
        t.display();
    }
}
