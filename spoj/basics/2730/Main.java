import java.util.Scanner;

class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int a;

        do {
            a = sc.nextInt();
            System.out.println(a);
        } while(a != 42);
    }
}
