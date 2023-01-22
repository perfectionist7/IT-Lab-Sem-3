import java.io.FilenameFilter;

import java.io.*;
class OnlyExt implements FilenameFilter {
    String ext;
    public OnlyExt(String name) {
        this.ext = "." + name;
    }
    public boolean accept(File dir, String k) {
        return k.endsWith(ext);
    }
}
public class filtering_names {
    public static void main(String args[]) {
        File f = new File("C:/Users/Ayush Khandelwal/Downloads/OOP All Slides/OOP Endsem Prep");
        FilenameFilter obj = new OnlyExt("java");
        String[] s = f.list(obj);
        for(int i=0; i<s.length; i++) {
            System.out.println(s[i]);
        }

    }
}
