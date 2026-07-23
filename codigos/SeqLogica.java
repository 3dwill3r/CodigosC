import java.util.Scanner;

public class SeqLogica {
        public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);

        int N = entrada.nextInt();

        for (int i = 1; i <= N; i++) {

            // Primeira linha
            System.out.println(i + " " + (i * i) + " " + (i * i * i));

            // Segunda linha
            System.out.println(i + " " + ((i * i) + 1) + " " + ((i * i * i) + 1));
        }

        entrada.close();
    }
}
