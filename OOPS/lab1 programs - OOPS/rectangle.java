import java.util.Scanner;
class rectangle {
	public static void main(String args[]) {
		Scanner dis = new Scanner(System.in);
		int length = dis.nextInt();
		int breadth = dis.nextInt();
		int area = length*breadth;
		int perimeter = 2*(length+breadth);
		System.out.println("Area of the rectangle ="+area);
		System.out.println("Perimeter of the rectangle ="+perimeter);
	}
}
