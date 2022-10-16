import java.util.Scanner;
class Account{
    static int count;
    Scanner dis= new Scanner(System.in);
    String name;
    int number;
    String type;
    double balance;
    Account(){
        System.out.println("Enter the name of the customer:");
        name=dis.nextLine();
        System.out.print("Enter the account number of the customer: ");
        number=dis.nextInt();
        count++;
    }    
    
    void deposit(int value){
        balance+=value;
        System.out.println(value+" Deposited");
    }
    void withdraw(int value){
        if(balance<value){
            System.out.println("Insufficient Funds!");
            return;
        }
        balance-=value;
    }
    void display(){
        System.out.println("Your account balance is:"+balance);
    }
    
};

class Savings extends Account{
    Savings(){
        super();
        System.out.println("The account type selected is Savings");
        this.type="Savings";
        Interest();
    }
    void Interest(){
        balance+=(0.06*balance);
    }
};

class Current extends Account{
    Current(){
        super();
        System.out.println("The account type selected is Current. Minimum Account Balance is Rs.10000");
        this.type="Current";
        Service();
    }
    void Service(){
        if(this.balance<10000){
            balance*=0.9;
        }
    }
};

class First{
    public static void main(String args[]){
        Savings s1=new Savings();
        s1.deposit(4200);
        s1.withdraw(700);
        s1.Interest();
        s1.display();
        Current c1=new Current();
        c1.deposit(9000);
        c1.withdraw(9700);
        c1.Service();
        c1.display();
    }
}