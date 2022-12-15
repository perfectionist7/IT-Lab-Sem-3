import java.io.*;
public class bytestreams {
    File f1 = new File("C:/Users/Ayush Khandelwal/Downloads/OOP All Slides/OOP Endsem Prep/Letsgo/first.txt");
    void reading() throws IOException {
        FileInputStream f0 = new FileInputStream(f1);
        byte[] buffer = new byte[10];
        byte[] buffer2 = new byte[10];
        int k = f0.read(buffer);
        for(int i=0; i<buffer.length; i++) {
            System.out.println((char)buffer[i]);
        }
        System.out.println(f0.available());
    }
    void writing() throws IOException {
        FileOutputStream k = new FileOutputStream(f1,true);
        String str = "ayush";
        byte k1[] = str.getBytes();
        k.write(k1);
    }
    public static void main(String args[]) throws IOException {
        bytestreams obj = new bytestreams();
        obj.writing();
        obj.reading();
        obj.writing();
        obj.reading();
    }
}
