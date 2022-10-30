import java.util.Scanner;
interface sports {
    final Scanner dis = new Scanner(System.in);
    void getNumberOfGoal();
    void dispTeam();
}
class Hockey implements sports {
    int goals;
    String team;
    Hockey() {
        System.out.println("Enter the name of the team: ");
        team = dis.next();
    }
    public void getNumberOfGoal() {
        System.out.println("Enter the number of goals: ");
        goals = dis.nextInt();
    }
    public void dispTeam() {
        System.out.println("Team: "+team);
        System.out.println("Goals: "+goals);
    }
}
class Football implements sports {
    int goals;
    String team;
    Football() {
        System.out.println("Enter the name of the team: ");
        team = dis.next();
    }
    public void getNumberOfGoal() {
        System.out.println("Enter the number of goals: ");
        goals = dis.nextInt();
    }
    public void dispTeam() {
        System.out.println("Team: "+team);
        System.out.println("Goals: "+goals);
    }
}
public class add3 {
    public static void main(String args[]) {
        sports h = new Hockey();
        h.getNumberOfGoal();
        h.dispTeam();
        sports f = new Football();
        f.getNumberOfGoal();
        f.dispTeam();
    }
}









