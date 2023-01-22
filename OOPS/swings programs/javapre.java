import javax.swing.*;
import java.awt.event.*;
import java.awt.*;
class covid implements ActionListener
{
JFrame f=new JFrame("Calculator");
JTextField t1;

JButton b;
JLabel l;
public covid(){
JLabel l1=new JLabel("String 1");
t1=new JTextField(20);
b=new JButton("Click");
l=new JLabel("Result");
f.add(l1);
f.add(t1);
f.add(b);
f.add(l);
f.setSize(400,400);
f.setVisible(true);
b.addActionListener(this);

f.setLayout(new FlowLayout());
}
public void actionPerformed(ActionEvent ae)
{
String a=t1.getText();
StringBuffer str=new StringBuffer(a);
str.reverse();
String ans="";
String b=(str.toString());
if(a.isEmpty())
{
    ans="false";
}
else if(a.equals(b))
{
   ans="true";
}
else {
    ans = "INVALID TEXT";
}
l.setText(ans);
f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
}
}
class javapre
{
public static void main(String args[])
{
covid fd=new covid();
}
}