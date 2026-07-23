import java.util.Scanner;

public class tiposCombustivel{
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int x, contal = 0, contag = 0, contad = 0;

        do {
            x = entrada.nextInt();
            switch (x) {
                case 1:
                    contal++;
                    break;
                case 2:
                    contag++;
                    break;
                case 3:
                    contad++;
                    break;
                default:
                    break;
            }
        } while (x != 4);
        System.out.println("MUITO OBRIGADO");
        System.out.println("Alcool: " + contal);
        System.out.println("Gasolina: " + contag);
        System.out.println("Diesel: " + contad);
        entrada.close();
    }
}