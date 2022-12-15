public class extends_thread {
    public static void main(String args[]) {
        NewThread x = new NewThread();
        Thread t = new Thread(x);
        t.start();
        
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
