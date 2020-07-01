import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] num = new int[9];
        int max_index = 0;
        for(int i = 0; i<9; i++){
            num[i] = sc.nextInt();
            if (num[i] > num[max_index])
                max_index = i;
        }
        System.out.println(num[max_index]);
        System.out.println(max_index+1);
    }
}
