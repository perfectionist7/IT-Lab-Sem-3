import java.util.Scanner;
public class time {
    int hours,minutes,seconds,h,m,s;
    String time1;
    time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    void fixedval() {
        Scanner dis = new Scanner(System.in);
        System.out.println("Enter the hours : ");
        hours = dis.nextInt();
        System.out.println("Enter the minutes : ");
        minutes = dis.nextInt();
        System.out.println("Enter the seconds : ");
        seconds = dis.nextInt();

    }
    String display() {
        time1 = hours + ":" + minutes + ":" + seconds;
        return time1;
    }
    void add(time t1, time t2) {
        h = t1.hours + t2.hours;
        m = t1.minutes + t2.minutes;
        s = t1.seconds + t2.seconds;
        if(s>60) {
            s = s - 60;
            m++;
        }
        if(m>60) {
            m = m - 60;
            h++;
        }
        this.hours = h;
        this.seconds = s;
        this.minutes = m;

    }
    public static void main(String args[]) {
        time obj1 = new time();
        time obj2 = new time();
        time obj3 = new time();
        obj1.fixedval();
        obj2.fixedval();
        System.out.println("The hh:mm:ss format of the first time is "+obj1.display());
        System.out.println("The hh:mm:ss format of the second time is "+obj2.display());
        obj3.add(obj1,obj2);
        System.out.println("The added time in hh:mm:ss format is "+obj3.display());
    }
}
