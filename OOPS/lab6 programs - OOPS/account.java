import java.util.Scanner;
class account {
    double amount,accno;
    double balance,intrest,withdraw;
    String name,acctype;
    Scanner dis = new Scanner(System.in);
    void getdata() {
        System.out.println("Enter the name of the customer: ");
        String name = dis.nextLine();
        System.out.println("Enter the account number: ");
        accno = dis.nextInt();
        System.out.println("Enter the type of the account: ");
        String acctype = dis.nextLine();
    }
    void acceptamt(int amount) {
        System.out.println("Enter the amount to be deposited: ");
        amount = dis.nextInt();
        balance = balance + amount;
    }
    int disbal() {
        return balance;
    }
    void interest() {
        intrest = 0.08*balance;
        balance = balance + intrest;
    }
    void withdraw() {
        System.out.println("Enter the amount to be withdrawed: ");
        withdraw = dis.nextInt();
        balance = balance - withdraw;
    }
    void minbal() {
        if(balance < 1000) {
            balance = balance - 100;
        }
    }
    public static void main(String args[]) {
        account obj1 = new obj1();
        obj1.getdata();
        obj1.acceptamt();
        obj1.interest();
        obj1.withdraw();
        obj1.disbal();

    }
}
