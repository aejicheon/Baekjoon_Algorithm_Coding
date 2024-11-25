import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        int answer = 0;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int dot_X = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());
        int dot_Y = Integer.parseInt(st.nextToken());

        if (dot_X > 0 && dot_Y > 0) {
            answer = 1;
        } else if (dot_X < 0 && dot_Y > 0) {
            answer = 2;
        } else if (dot_X < 0 && dot_Y < 0) {
            answer = 3;
        } else {
            answer = 4;
        }

        bw.write(answer + "");
        bw.flush();
        bw.close();
        br.close();
    }
}