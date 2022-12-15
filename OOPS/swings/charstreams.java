import java.io.*;
public class charstreams {
    File f = new File("C:/Users/Ayush Khandelwal/Downloads/OOP All Slides/OOP Endsem Prep/Letsgo/first.txt");
    void writing() throws IOException{
        FileWriter f0 = new FileWriter(f,true);
        String str = "NOW IS THE TIME FOR THE BEST THING";
        char[] c = str.toCharArray();
        f0.write(c);
    }
    void reading() throws IOException {
        FileReader f2 = new FileReader(f);
        char[] c = new char[5];
        f2.skip(2);
        System.out.println(f2.markSupported());
        f2.read(c);

        for(int i=0; i<c.length; i++) {
            System.out.println(c[i]);
        }
    }
    public static void main(String args[]) throws IOException {
        charstreams obj = new charstreams();
        obj.writing();
        obj.reading();
        obj.writing();
        obj.reading();
    }
}
