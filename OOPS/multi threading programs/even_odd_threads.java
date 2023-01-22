
class NewThread extends Thread {
    String name;
    NewThread(String name) {
        super("name");
        this.name = name;
    }
    public void run() {
        if(name.equals("even")) {
            try {
                for(int i=1; i<100; i++) {
                    if(i%2==0) {
                        System.out.println(i+" "+name);
                    }
                }
                Thread.sleep(1000);
            }
            catch(InterruptedException e) {
                System.out.println(name+" Thread Interrupted!");
            }
        }
        if(name.equals("odd")) {
            try {
                for(int i=1; i<100; i++) {
                    if(i%2!=0) {
                        System.out.println(i+" "+name);
                    }
                }
                Thread.sleep(1000);
            }
            catch(InterruptedException e) {
                System.out.println(name+" Thread Interrupted!");
            }
    }
}
}
public class even_odd_threads {
    public static void main(String args[]) {
        NewThread t1 = new NewThread("even");
        NewThread t2 = new NewThread("odd");
        try {
            for(int i=1; i<100; i++) {
                if(i%5==0) {
                    System.out.println("Main "+i);
                }
            }
            Thread.sleep(1000);
        }
        catch(InterruptedException e) {
            System.out.println("MAIN THREAD INTERRUPTED!");
        }
        t1.start();
        t2.start();

    }
}
