import java.io.*;
import java.util.Scanner;
public class check_name {
    public static void main(String args[]) throws IOException, FileNotFoundException {
        System.out.println("Enter the name: ");
        Scanner dis = new Scanner(System.in);
        String str = dis.nextLine();
        File f1 = new File(str);
        if(f1.isDirectory()) {
            FilenameFilter obj = new OnlyExt("java");
            String s[] = f1.list(obj);
            System.out.println("No of java files in the directory are "+s.length);
        }
        else if(f1.isFile()) {
            FileInputStream f0 = new FileInputStream(f1);
            System.out.println("No of characters available are "+f0.available());

        }
    }
}
class OnlyExt implements FilenameFilter{
    String ext;
    OnlyExt(String ext) {
        this.ext = "." + ext;
    }
    public boolean accept(File dir, String name) {
        return name.endsWith(ext);
    }
}