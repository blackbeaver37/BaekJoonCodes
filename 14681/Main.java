import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        int quad = 0;
        if (x * y > 0) {
            if (x > 0)
                quad = 1;
            else
                quad = 3;
        }
        else {
            if (x > 0)
                quad = 4;
            else
                quad = 2;
        }
        System.out.println(quad);
    }
}
