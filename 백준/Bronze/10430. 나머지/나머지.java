import java.util.*;

public class Main {

	public static void main(String[] args) {
		int a,b,c;
		Scanner sc = new Scanner(System.in);
		a = sc.nextInt();
		b = sc.nextInt();
		c = sc.nextInt();
		System.out.println((a+b)%c);	
		System.out.println(((a%c)+(b%c))%c);	
		System.out.println((a*b)%c);	
		System.out.println(((a%c)*(b%c))%c);	
	}

}
