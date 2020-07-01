import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] n = new int[10];
        ArrayList<Integer> rest = new ArrayList<>();
        for(int i=0; i<10; i++){
            n[i] = sc.nextInt();
            if(!rest.contains(n[i] % 42))
                rest.add(n[i]%42);
        }
        System.out.println(rest.size());
    }
}
