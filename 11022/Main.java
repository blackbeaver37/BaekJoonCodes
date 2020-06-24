import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i = 0; i < t; i++) {
            int n1 = sc.nextInt();
            int n2 = sc.nextInt();
            System.out.println("Case #" + (i + 1) + ": " + n1 + " + " + n2 + " = " + (n1+n2));
        }
    }
}