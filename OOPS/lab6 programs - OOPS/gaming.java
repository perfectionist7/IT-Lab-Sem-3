class Game {
    void type() {
        System.out.println("indoor & outdoor games ");
    }
}
class cricket extends Game {
    void type() {
        System.out.println("cricket is an outdoor game ");
    }
}
class chess extends Game {
    void type() {
        System.out.println("chess is an indoor game");
    }
}
public class gaming {
    public static void main(String args[]) {
        Game a = new Game();
        a.type();
        cricket b = new cricket();
        a = b;
        a.type();
        chess c = new chess();
        a = c;
        a.type();
    }
}
