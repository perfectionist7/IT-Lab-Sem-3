import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class SwingDemo1 implements ActionListener, ItemListener
{ 
    JLabel l1;
    JTextField t1;
    JTextField t2;
    JButton b1;
    JFrame f;
    JToggleButton tog;
    JCheckBox c;
    JRadioButton r1;
    JRadioButton r2;
    JRadioButton r3;
    JComboBox c1;
    JFrame f1;
    JFrame f2;
SwingDemo1()
{
    String nan[] = {"India","USA","UK","Argentina","Portugal","Morroco"};

f = new JFrame("FLOW LAYOUT");
f.setSize(400,300);
f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
c1 = new JComboBox(nan);
l1 = new JLabel("Enter name");
t1 = new JTextField(12);
t2 = new JTextField(12);
b1 = new JButton("OK");
tog = new JToggleButton("LET");
c = new JCheckBox("check");
r1 = new JRadioButton("A) Male");
r2 = new JRadioButton("B) Female");
r3 = new JRadioButton("C) Chakka");
ButtonGroup bg = new ButtonGroup();
bg.add(r1);
bg.add(r2);
bg.add(r3);
f.setLayout(new FlowLayout());
f.add(l1);
f.add(t1);
f.add(t2);
f.add(b1);
f.add(tog);
f.add(c);
f.add(r1);
f.add(r2);
f.add(r3);
f.add(c1);
f.setVisible(true);
c.addItemListener(this);
b1.addActionListener(this);
tog.addActionListener(this);
f1 = new JFrame("BORDER LAYOUT");
f1.setSize(300, 200);
f1.setVisible(true);
c1 = new JComboBox(nan);
l1 = new JLabel("Enter name");
t1 = new JTextField(12);
t2 = new JTextField(12);
b1 = new JButton("OK");
tog = new JToggleButton("LET");
c = new JCheckBox("check");
r1 = new JRadioButton("A) Male");
r2 = new JRadioButton("B) Female");
r3 = new JRadioButton("C) Chakka");
f1.setLayout(new BorderLayout());
f1.add(l1,BorderLayout.NORTH);
f1.add(t1,BorderLayout.EAST);
f1.add(t2,BorderLayout.WEST);
f1.add(b1,BorderLayout.SOUTH);
f1.add(c1,BorderLayout.CENTER);
f2 = new JFrame("GRID LAYOUT");
c1 = new JComboBox(nan);
l1 = new JLabel("Enter name");
t1 = new JTextField(12);
t2 = new JTextField(12);
b1 = new JButton("OK");
tog = new JToggleButton("LET");
c = new JCheckBox("check");
r1 = new JRadioButton("A) Male");
r2 = new JRadioButton("B) Female");
r3 = new JRadioButton("C) Chakka");
f2.setSize(300, 200);
f2.setVisible(true);
f2.setLayout(new GridLayout(2,3));
f2.add(l1);
f2.add(t1);
f2.add(t2);
f2.add(b1);
f2.add(c1);



}
public void actionPerformed(ActionEvent ae) {
        if(ae.getSource()==b1) {
            String a = t1.getText();
            t2.setText(a);
        }

}
public void itemStateChanged(ItemEvent e) {
    
}
public static void main(String args[])
{
    SwingUtilities.invokeLater(
        new Runnable() {
        public void run() {
            SwingDemo1 s = new SwingDemo1();
        }
    });
}
}
