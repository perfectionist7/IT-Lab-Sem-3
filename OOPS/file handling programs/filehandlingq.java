import java.util.Scanner;
import java.io.*;
import java.math.*;
public class filehandlingq {
    public static void main(String args[]) throws IOException {
        NumberThread n1 = new NumberThread();
        WordThread n2 = new WordThread();
        n1.start();
        try{
        n1.join();
        }
        catch(InterruptedException e) {   
        }
        n2.start();
        File f = new File("C:/Users/Ayush Khandelwal/Downloads/OOP All Slides/Done!/storage.txt");
        FileWriter fw = new FileWriter(f);
        BufferedWriter bw = new BufferedWriter(fw);
        for(int j=0; j<n1.arr.length; j++) {
            System.out.println(n1.arr[j]);
            System.out.println(n2.str[j]);
        }
        for(int i=0; i<Math.max(n1.arr.length,n2.str.length); i++) {
            bw.write(n1.arr[i]+" "+n2.str[i]+"\n");
        }

    }
}
class NumberThread extends Thread {
    int[] arr = new int[10];
    synchronized public void run()  {
        try {
        File f = new File("C:/Users/Ayush Khandelwal/Downloads/OOP All Slides/Done!/primenumbers.txt");
        FileReader fr = new FileReader(f);
        BufferedReader br = new BufferedReader(fr);
        String s;
        int k=0;
        while((s=br.readLine())!=null) {
            int n = Integer.parseInt(s);
            int count=0;
            for(int i=2; i<n; i++) {
                if(n%i==0) {
                    count++;
                    break;
                }
            }
            if(count==0) {
                System.out.println(n);
                arr[k++] = n;
            }

        }
    }
        catch(IOException e) {
        }

    }
}
class WordThread extends Thread {
    String[] str = new String[10];
    synchronized public void run() {
        try {
            File f = new File("C:/Users/Ayush Khandelwal/Downloads/OOP All Slides/Done!/words.txt");
            FileReader fr = new FileReader(f);
            BufferedReader br = new BufferedReader(fr);
            String s;
            int k=0;
            while((s=br.readLine())!=null) {
                StringBuffer s1 = new StringBuffer(s);
                s1.reverse();
                String m = s1.toString();
                if(s.equals(m)) {
                    System.out.println(s);
                    str[k++] = s;
                }
            }
        }
        catch(IOException e) {
        }
    }
}
