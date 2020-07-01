import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] integer = new int[10];
        for(int i=0; i<10; i++)
            integer[i] = 0;
        int n = 1, tmp;
        for(int i=0; i<3; i++){
            tmp = sc.nextInt();
            n *= tmp;
        }
        while(n != 0){
            integer[n%10]++;
            n /= 10;
        }
        for(int i=0; i<10; i++)
            System.out.println(integer[i]);
    }
}
