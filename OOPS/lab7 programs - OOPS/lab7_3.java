import java.util.Scanner;
class demonstrate{
    public static void main(String args[]){
        Integer boxing= new Integer(21); //Boxing
        Integer autoboxing=5; //Autoboxing
        autoboxing+=10;
        int unboxing = autoboxing; //Unboxing
        System.out.println("Value Boxed: "+boxing);
        System.out.println("Autoboxed Value: "+autoboxing);
        System.out.println("Value UnBoxed: "+unboxing);
    }
}