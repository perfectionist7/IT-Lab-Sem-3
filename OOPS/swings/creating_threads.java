public class creating_threads {
    public static void main(String args[]) {
        NewThread x = new NewThread("First Thread");
        try { 
            for(int i=0; i<5; i++) {
                System.out.println("HELLO FROM MAIN "+i);
                Thread.sleep(1000);
            }
        }
        catch(InterruptedException e) {
            System.out.println("MAIN THREAD INTERRUPTED");
        }
    }
}
class NewThread implements Runnable {
    Thread t;
    NewThread(String name) {
        t = new Thread(this,name);
        System.out.println("New thread created "+t);
        t.start();
    }
    public void run() {
        try {
            for(int i=0; i<5; i++) {
                System.out.println("HELLO "+i);
                Thread.sleep(1000);
            }
        } 
        catch(InterruptedException e) {
            System.out.println("NEW THREAD INTERRUPTED!");
        }
    }
}
