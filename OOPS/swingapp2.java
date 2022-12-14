//creating an app with 2 buttons, textfield, labels etc
import javax.swing.*;
public class swingapp2 {
    swingapp2() {
        JFrame f = new JFrame("An App By Ayush");
        f.setSize(500,500);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        JButton b1 = new JButton("Ayush is epic");
        b1.setBounds(30,50,100,100);
        JButton b2 = new JButton("Lets fucking go");
        b2.setBounds(50,50,50,50);
        JTextField t1 = new JTextField("HELLO GUYS");
        t1.setBounds(30,50,50,30);
        JLabel l1 = new JLabel("Not the very best label ig");
        f.add(b1);
        f.add(b2);
        f.add(t1);
        f.add(l1);
        f.setVisible(true);
    }
    public static void main(String args[]) {
        swingapp2 s = new swingapp2();
    }
}