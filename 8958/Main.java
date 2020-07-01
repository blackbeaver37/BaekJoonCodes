import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        for(int i=0; i<t; i++){
            String answer = sc.nextLine();
            int score = 0;
            int tmp = 0;
            for(int j=0; j < answer.length(); j++){
                if(answer.charAt(j) == 'O'){
                    tmp++;
                    score += tmp;
                }
                else
                    tmp = 0;
            }
            System.out.println(score);
        }
    }
}
