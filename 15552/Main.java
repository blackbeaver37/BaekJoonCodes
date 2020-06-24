import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int t = Integer.parseInt(br.readLine());
        for(int i=0; i<t; i++){
            String[] n = br.readLine().split(" ");
            int n1 = Integer.parseInt(n[0]);
            int n2 = Integer.parseInt(n[1]);
            bw.write(n1+n2+"\n");
        }
        bw.flush();
        bw.close();
    }
}
