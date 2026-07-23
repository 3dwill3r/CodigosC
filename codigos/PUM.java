import java.util.Scanner;

public class PUM {

    public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);

        int N = entrada.nextInt();
        int numero = 1;

        for (int i = 0; i < N; i++) {

            System.out.println(numero + " " + (numero + 1) + " " + (numero + 2) + " PUM");

            numero += 4;
        }

        entrada.close();
    }
}