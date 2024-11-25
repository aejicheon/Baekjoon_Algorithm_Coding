import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int subjectNumber = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());

        int[] arr = new int[subjectNumber];
        for (int i = 0; i < subjectNumber; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(arr);
        int maxValue = arr[arr.length - 1];

        double sum = 0.0;
        for (int i = 0; i < arr.length; i++) {
            sum += (arr[i] / (double)maxValue) * 100;
        }

        double average = sum / subjectNumber;

        bw.write(average + "");
        bw.flush();
        bw.close();
        br.close();
    }
}