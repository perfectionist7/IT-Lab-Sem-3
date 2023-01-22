public class creating_threads2 {
    public static void main(String args[]) {
        NewThread x = new NewThread();
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
class NewThread extends Thread {
    NewThread() {
        super("New thread");
        System.out.println("New thread created "+this);
        start();
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
