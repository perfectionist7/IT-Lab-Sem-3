public class synchronization {
    public static void main(String args[]) {
        callme obj = new callme();
        NewThread t = new NewThread(obj, "Manipal");
        t.start();
        NewThread t2 = new NewThread(obj, "Institute");
        t2.start();
        NewThread t3 = new NewThread(obj, "Of");
        t3.start();
        NewThread t4 = new NewThread(obj, "Technology");
        t4.start();


    }
}
class callme {
    void call(String msg) {
        
        System.out.print("[ " + msg + " ");
        try {
            notify();
            Thread.sleep(1000);
            wait();
        }
        catch(InterruptedException e) {
            System.out.println("CALL ME INTERRUPTED");
        }
        System.out.print("] ");

    }
}
class NewThread extends Thread {
    callme obj;
    String str;
    NewThread(callme something, String str) {
        this.obj = something;
        this.str = str;
    }
    public void run() {
        obj.call(str);
    }
}
