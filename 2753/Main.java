import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int year = sc.nextInt();
        int ck = 0;
        if (year % 4 == 0)
            ck = 1;
        if (year % 100 == 0)
            ck = 0;
        if (year % 400 == 0)
            ck = 1;
        System.out.println(ck);
    }
}
