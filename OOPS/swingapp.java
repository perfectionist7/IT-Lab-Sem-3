import javax.swing.*;
//creating an empty app
public class swingapp {
    swingapp() {
        JFrame f = new JFrame("A swing application");
        f.setSize(500,125);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setVisible(true);
    }
    public static void main(String args[]) {
        swingapp s = new swingapp();
    }
}
