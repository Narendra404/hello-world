import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-- > 0) {

            int n = sc.nextInt();
            int m = sc.nextInt();

            int countn = 0;

            for(int i = 0; i < (n * 3) + 1; i++) {
                
            int countm = 0;
                for(int j = 0; j < (m * 3) + 1; j++) {

                    
                    if (countn == 0 || countm == 0) {
                        
                        System.out.print("*");
                    } 
                    else {

                        System.out.print(".");
                    }

                    countm--;

                    if(countm < 0) {
                        countm = 2;
                    }
                }
                
                System.out.println();
                countn--;

                if(countn < 0) {
                    countn = 2;
                }

            }
        }

    }
}
