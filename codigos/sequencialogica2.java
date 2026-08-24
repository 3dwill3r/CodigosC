import java.util.Scanner;

public class sequencialogica2 {
      public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);

        int x = entrada.nextInt();
        int y = entrada.nextInt();

        for (int i = 1; i <= y; i++) {

            if (i % x == 0) {
                System.out.println(i);
            } else {
                System.out.print(i + " ");
            }

        }

        entrada.close();
    }
}
