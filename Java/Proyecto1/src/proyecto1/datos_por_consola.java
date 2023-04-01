
package proyecto1;

import java.util.Scanner;

/**
 *
 * @author BeTa
 */
public class datos_por_consola {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner entrada=new Scanner(System.in);
        float valor;
        System.out.println("Ingresa Entero");
        valor=entrada.nextFloat();
        System.out.println("Tu numero es:"+valor);
        //
        String cadena;
        System.out.println("Escribe una cadena");
        cadena=entrada.nextLine();
        System.out.println("Tu cadena es:"+cadena);
        //
        char caracter;
        System.out.println("Escribe una caracter");
        caracter=entrada.next().charAt(0);
        System.out.println("Tu cadena es:"+caracter);
        
    }
    
}
