import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> score = new ArrayList<>();
        int max = 0;
        for(int i=0; i<n; i++){
            score.add(sc.nextInt());
            if(score.get(i) > max)
                max = score.get(i);
        }
        double sum=0;
        for(double i : score)
            sum += i/max * 100;
        System.out.println(sum/n);
    }
}
