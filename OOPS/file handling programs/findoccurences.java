import java.io.*;
import java.util.Scanner;
public class findoccurences {
    File f = new File("C:/Users/Ayush Khandelwal/Downloads/OOP All Slides/OOP Endsem Prep/Letsgo/first.txt");
    void reading() throws IOException {
        FileReader fr = new FileReader(f);
        BufferedReader bw = new BufferedReader(fr);
        String s;
        System.out.println("Enter the word to check for: ");
        Scanner dis = new Scanner(System.in);
        String str = dis.nextLine();
        int count=0;
   
        while((s=bw.readLine())!=null) {
            int index=0;
            while(true) {
                index = s.indexOf(str,index);
                if(index!=-1) {
                    count++;
                    index = index + str.length();
                }
                else {
                    break;
                }
            }
        }
        System.out.println(count);

        }

    public static void main(String args[]) throws IOException {
        findoccurences obj = new findoccurences();
        obj.reading();
    }
}

