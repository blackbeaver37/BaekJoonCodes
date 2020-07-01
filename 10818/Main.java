import java.util.Scanner;

public class Main {
    public static final int MAX_NUM = 1000000;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] num = new int[n];
        int min = MAX_NUM;
        int max = MAX_NUM * -1;
        for(int i=0; i<n; i++){
            num[i] = sc.nextInt();
            if(num[i] < min)
                min = num[i];
            if(num[i] > max)
                max = num[i];
        }
        System.out.println(min + " " + max);
    }
}
