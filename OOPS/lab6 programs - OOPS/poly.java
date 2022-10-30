class Bike {
    int speedlimit;
    Bike() {
        speedlimit = 10;
    }
    void run() {
        System.out.println("speed limit "+speedlimit);
    }
}
class Splendar extends Bike {
    Splendar() {
        speedlimit = 20;
    }
    void run() {
        System.out.println("speed limit "+speedlimit);
    }
}
class poly {
    public static void main(String args[]) {
        Bike a = new Bike();
        a.run();
        Splendar b = new Splendar();
        a = b;
        a.run();
    }
}
