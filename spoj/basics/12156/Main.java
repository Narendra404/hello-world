import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-- > 0) {

            String str = sc.next();

            for(int i = 0; i < (str.length() / 2); i += 2) {

                System.out.print(str.charAt(i));
            }
            System.out.println();
        }

    }
}
