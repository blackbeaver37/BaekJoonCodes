import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int i = 1;
        int flag = 1;
        while (true) {
            for (int j = 0; j < i; j++)
                System.out.print("*");
            if (i == n)
                flag = -1;
            i += flag;
            if (i == 0)
                break;
            System.out.println();
        }
    }
}
