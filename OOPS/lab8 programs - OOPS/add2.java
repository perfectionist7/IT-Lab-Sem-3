interface Area {
    double area();
}
class Triangle implements Area {
    int base, height;
    double arr;
    Triangle(int base, int height) {
        this.base = base;
        this.height = height;
    }
    public double area() {
        arr = 0.5 * base * height;
        return arr;
    }
}
class Square implements Area {
    int side;
    double arr;
    Square(int side) {
        this.side = side;
    }
    public double area() {
        arr = side * side;
        return arr;
    }
}
public class add2 {
    public static void main(String args[]) {
        Area t = new Triangle(5, 7);
        System.out.println(t.area());
        Area s = new Square(6);
        System.out.println(s.area());
    }
}
