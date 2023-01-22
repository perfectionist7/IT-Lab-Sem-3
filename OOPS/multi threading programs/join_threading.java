// Using join() to wait for threads to finish.
class NewThread extends Thread
{ String name; // name of thread
    Thread t;
NewThread(String threadname) 
{ name = threadname;
    t = new Thread(this,name);
System.out.println("New thread: " + t);
start(); 
}
public void run()
{ try
{ for(int i = 5; i > 0; i--) 
{ System.out.println(name + ": " + i);
Thread.sleep(1000);
}
} 
catch (InterruptedException e) 
{ System.out.println(name + " interrupted.");
}
System.out.println(name + " exiting."); 
} 
}

public class join_threading {
public static void main(String args[])
{ NewThread ob1 = new NewThread("One");
NewThread ob2 = new NewThread("Two");
NewThread ob3 = new NewThread("Three");
System.out.println("Thread One is alive: " + ob1.isAlive());
System.out.println("Thread Two is alive: " + ob2.isAlive());
System.out.println("Thread Three is alive: " + ob3.isAlive());
try 
{ System.out.println("Waiting for threads to finish.");
ob1.join();
ob2.join();
ob3.join();
} 
catch (InterruptedException e) { System.out.println("Main thread Interrupted"); }
System.out.println("Thread One is alive: " + ob1.isAlive() );
System.out.println("Thread Two is alive: " + ob2.isAlive() );
System.out.println("Thread Three is alive: " + ob3.isAlive() );
System.out.println("Main thread exiting."); } }
