public class multiple_threads {
    public static void main(String args[]) {
        NewThread x = new NewThread("First Thread");
        NewThread y = new NewThread("Second Thread");
        NewThread z = new NewThread("Third Thread");
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
    String name;
    NewThread(String name) {
        this.name = name;
        t = new Thread(this,name);
        System.out.println("New thread created "+t);
        t.start();
    }
    public void run() {
        try {
            for(int i=0; i<5; i++) {
                System.out.println("HELLO "+name+i);
                Thread.sleep(1000);
            }
        } 
        catch(InterruptedException e) {
            System.out.println("NEW THREAD INTERRUPTED!");
        }
    }
}
