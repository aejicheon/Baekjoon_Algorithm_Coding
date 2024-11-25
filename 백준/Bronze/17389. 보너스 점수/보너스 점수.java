import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());
        String text = st.nextToken();

        int sum = 0;
        int bonus = 0;
        for (int i = 0; i < text.length(); i++) {
            if (text.charAt(i) == 79) {
                sum += (i + 1) + bonus;
                bonus++;
            } else if (text.charAt(i) == 88) {
                bonus = 0;
            }
        }



        bw.write(sum + "");
        bw.flush();
        bw.close();
        br.close();
    }
}