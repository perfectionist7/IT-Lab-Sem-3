import java.io.*;
public class making_directories {
    public static void main(String args[]) {
        File f = new File("C:/Users/Ayush Khandelwal/Downloads/OOP All Slides");
        String str = "C:/Users/Ayush Khandelwal/Downloads/OOP All Slides";
        if(f.isDirectory()) {
            String s[]= f.list();
            for(int i=0; i<s.length; i++) {
                File f1 = new File(str+"/"+s[i]);
                if(f1.isDirectory()) {
                    System.out.println(s[i]+" is a directory");
                }
                else {
                    System.out.println(s[i]+" is a file");
                }
            }
        }
    }
}
