import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-- > 0) {

            int n = sc.nextInt();
            int m = sc.nextInt();

            for(int i = 0; i < n; i++) {
                
                for(int j = 0; j < m; j++) {
                    
                    if(i == 0 || j == 0 || j == m-1 || i == n-1) {
                        System.out.print("*");
                    }
                    else {
                        System.out.print(".");
                    }
                }

                System.out.println();
            }
        }

    }
}
