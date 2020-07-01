import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int p1 = 2000;
        int p2 = 2000;
        int tmp;
        for (int i = 0; i < 3; i++) {
            tmp = sc.nextInt();
            if (p1 > tmp)
                p1 = tmp;
        }
        for (int i = 0; i < 2; i++) {
            tmp = sc.nextInt();
            if (p2 > tmp)
                p2 = tmp;
        }
        System.out.println(p1+p2-50);
    }
}
