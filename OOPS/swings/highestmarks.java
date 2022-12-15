import java.io.*;
public class highestmarks  {
    File f = new File("C:/Users/Ayush Khandelwal/Downloads/OOP All Slides/replicacheck/highest.txt");
    void reading()throws IOException {
        FileReader fr = new FileReader(f);
        BufferedReader br = new BufferedReader(fr);
        String s;
        String[] str = new String[100];
        int k=0;
        int m=0;
        String f;
        while((s=br.readLine())!=null) {
            int count=0;
            int i;
            for(i=0; i<s.length(); i++) {
                if(s.charAt(i)==':') {
                    count++;
                }
                if(count==2) {
                    k = i;
                    break;
                }
            }
            for(int j=k+1; j<s.length(); j++) {
                String c = String.valueOf(s.charAt(j));
            
            }
            m++;

            
        }
        for(int i=0; i<6; i++) {
            System.out.println(str[i]);
        }
    }
    public static void main(String args[]) throws IOException {
        highestmarks h = new highestmarks();
        h.reading();
    }
}
