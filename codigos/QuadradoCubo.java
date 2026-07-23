import java.util.Scanner;

public class QuadradoCubo {
       public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);

        int N = entrada.nextInt();

        for (int i = 1; i <= N; i++) {

            System.out.println(i + " " + (i * i) + " " + (i * i * i));

        }

        entrada.close();
    }
}
