import java.util.Scanner;


public class Main {

	public static int arrSum(int[] arrS) {		// 배열 합
		int hap = 0;
		for(int i = 0; i < arrS.length; i++) {
			hap += arrS[i];
		}
		
		return hap;
	}
	
	public static void arrPrint(int[] arrS) {		// 배열 출력
		for(int i = 0; i < arrS.length; i++) {
			System.out.println(arrS[i]);
		}
	}
	
	public static void arrSort(int[] arrS) {		// 배열 정렬
		for(int i = 0; i < arrS.length - 1; i++) {
			for(int j = i+1; j < arrS.length; j++) {
				if(arrS[i] > arrS[j]) {
					int temp = arrS[i];
					arrS[i] = arrS[j];
					arrS[j] = temp;
				}
			}
		}
		arrPrint(arrS);
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[] arr = new int[9];
		
		for(int i = 0; i < arr.length; i++) {
			arr[i] = sc.nextInt();
		}
		
		int[] dap = new int[7];	//정답 배열
		int dapJ = 0;
		
		for(int flag1 = 0; flag1 < arr.length - 1; flag1++) {
			for(int flag2 = flag1 + 1; flag2 < arr.length; flag2++) {
				for(int i = 0; i < arr.length; i++) {
					if(i != flag1 && i != flag2) {
						dap[dapJ] = arr[i];
						dapJ++;
					}
				}
				if(arrSum(dap) == 100) {
					break;
				}
				
				dapJ = 0;
			}
			if(arrSum(dap) == 100) {
				break;
			}
		}
		arrSort(dap);
		
		
		

	}

}