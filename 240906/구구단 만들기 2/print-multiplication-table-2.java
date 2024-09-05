import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b;
        a = sc.nextInt();
        b = sc.nextInt();
        for(int i = 1; i <= 4; i++) {
            int k = i * 2;
            for(int j = b; j >= a; j--) {                
                if(j == a)
                    System.out.println(j + " * " + k + " = " + j * k);
                else
                    System.out.print(j + " * " + k + " = " + j * k + " / ");
            }
        }
    }
}