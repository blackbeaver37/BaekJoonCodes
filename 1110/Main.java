import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int count = 0;
        int n1 = num / 10;
        int n2 = num % 10;
        do {
            int tmp = n2;
            n2 = (n1 + n2) % 10;
            n1 = tmp;
            count++;
        } while (n1 * 10 + n2 != num);
        System.out.println(count);
    }
}
