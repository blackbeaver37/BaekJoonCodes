import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int a, b, b1, b10, b100;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        b100 = b / 100;
        b10 = (b - b100 * 100) / 10;
        b1 = b - b100 * 100 - b10 * 10;
        System.out.println(a*b1);
        System.out.println(a*b10);
        System.out.println(a*b100);
        System.out.println(a*b);
    }
}
