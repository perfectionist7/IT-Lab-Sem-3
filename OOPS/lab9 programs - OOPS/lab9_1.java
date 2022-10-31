import java.lang.String;
import java.util.Scanner;
class programs {
int count_character(String res) {
    int count = 0;
    for(int i=0; res.charAt(i)!=' '; i++) {
        count++;
    }
    return count;
}
int count_words(String res) {
    int count = 0;
    for(int i=0; res.charAt(i)==' ' && res.charAt(i)!=' '; i++) {
        count++;
    }
    return count;
}
int count_lines(String res) {
    int count = 0;
    for(int i=0; res.charAt(i)==' ' && res.charAt(i+1)==' '; i++) {
        count++;
    }
    return count;
}
int count_vowels(String res) {
    int count=0;
    char[] vowels = {'a','e','i','o','u'};
    for(int i=0; i<5; i++) {
        for(int j=0; res.charAt(j)==vowels[i]; j++) {
            count++;
        }
    }
    return count;

}
}
public class lab9_1 {
    public static void main(String args[]) {
        Scanner dis = new Scanner(System.in);
        programs obj1 = new programs();
        System.out.println("Enter the string: ");
        String str = dis.next();
        System.out.println("No of characters: "+obj1.count_character(str));
        System.out.println("No of words: "+obj1.count_words(str));
        System.out.println("No of lines: "+obj1.count_lines(str));
        System.out.println("No of vowels: "+obj1.count_vowels(str));
    }
}