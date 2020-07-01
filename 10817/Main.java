import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n1 = 0;
        int n2 = 0;
        int tmp;
        for(int i=0; i<3; i++){
            tmp = sc.nextInt();
            if (tmp > n1) {
                n2 = n1;
                n1 = tmp;
            }
            else if (tmp > n2)
                n2 = tmp;
        }
        System.out.println(n2);
    }
}
