import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		int length,bp = 0,cnt = 0;
		String ss;
		
		length = s.nextInt();
		ss = s.next();
		
		for(int i = 0; i < ss.length(); i++) {
			if(ss.charAt(i) == 'O') {
				cnt += ((i+1)+bp);
				bp += 1;
			}
			else {
				bp = 0;
			}
		}
		
		System.out.println(cnt);
		
	}

}