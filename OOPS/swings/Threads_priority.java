public class Threads_priority {
    public static void main(String args[]) {
        Thread t1 = Thread.currentThread();
        t1.setName("OOP Thread");
        MITThread t2 = new MITThread("MIT Thread");
        ICTThread t3 = new ICTThread("ICT Thread");
        System.out.println("PRIORITY OF OOP THREAD "+t1.getPriority() + " NAME: " + t1);
        System.out.println("PRIORITY OF OOP THREAD "+t2.getPriority() + " NAME: " + t2);
        System.out.println("PRIORITY OF OOP THREAD "+t3.getPriority() + " NAME: " + t3);
        t2.setPriority(1);
        t3.setPriority(10);
        t1.setPriority(6);
        System.out.println("PRIORITY OF OOP THREAD "+t1.getPriority() + " NAME: " + t1);
        System.out.println("PRIORITY OF OOP THREAD "+t2.getPriority() + " NAME: " + t2);
        System.out.println("PRIORITY OF OOP THREAD "+t3.getPriority() + " NAME: " + t3);
        try {
            for(int i=0; i<100; i++) {
                System.out.println("OOP Thread");
            }
            t2.start();
            t2.join();
            t3.start();
            Thread.sleep(1000);
        }
        catch(InterruptedException e) {
            System.out.println("MAIN THREAD INTERRUPTED!");
        }



    }
}
class MITThread extends Thread {
    Thread t;
    MITThread(String name) {
        t = new Thread(this);
        t.setName("MIT Thread");
    }
    public void run() {
        try {
        for(int i=0; i<100; i++) {
            System.out.println("MIT");
        }
        Thread.sleep(1000);
    }
    catch(InterruptedException e) {
        System.out.println("MIT THREAD INTERRUPTED");
    }
    }
}
class ICTThread extends Thread {
    Thread t;
    ICTThread(String name) {
        t = new Thread(this);
        t.setName("ICT Thread");
    }
    public void run() {
        try {
        for(int i=0; i<100; i++) {
            System.out.println("ICT");
        }
        Thread.sleep(1000);
    }
    catch(InterruptedException e) {
        System.out.println("ICT THREAD INTERRUPTED");
    }
    }
}
