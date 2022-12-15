import java.io.*;
public class replicafiles  {
    File f = new File("C:/Users/Ayush Khandelwal/Downloads/OOP All Slides/replicacheck");
    void reading() throws IOException {
        String str = "C:/Users/Ayush Khandelwal/Downloads/OOP All Slides/replicacheck";
        String s[] = f.list();
        for(int i=0; i<s.length;i++) {
            for(int j=i+1; j<s.length; j++) {
                File f1 = new File(str+"/"+s[i]);
                File f2 = new File(str+"/"+s[j]);
                FileReader fr = new FileReader(f1);
                FileReader fr2 = new FileReader(f2);
                BufferedReader br = new BufferedReader(fr);
                BufferedReader br2 = new BufferedReader(fr2);
                String k;
                String m;
                int count=0;
                while((k=br.readLine())!=null&&(m=br2.readLine())!=null) {
                    if(!m.equals(k)) {
                        count=1;
                    }
                }
                if(count==0) {
                    System.out.println(s[i]+" and "+s[j]+" are replicas");
                }
        }
    }
}
    public static void main(String args[]) throws IOException {
        replicafiles obj = new replicafiles();
        obj.reading();
    }
}
