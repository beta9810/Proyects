
package proyecto1;

/**
 *
 * @author BeTa
 */
public class variables_Datos_Primitivos {

    
    public static void main(String[] args) {
        byte mordida;//El valor maximo para byte es 127
        mordida=(byte)126.55;//Esto se llama casting y sirve para convertir un entero a decimal
        System.out.println("mordida="+mordida);
        
        short corto;//El valor maximo para byte es 32000
        corto=32000;
        System.out.println("corto="+corto);
        
        int entero;//El valor maximo para byte es 2.0000.000.000
        entero=2000000000;
        System.out.println("entero="+entero);
        
        long largo;//El valor maximo para byte es 900.000.000
        largo=900000000;
        System.out.println("largo="+largo);
        
        float flotante;//El valor maximo para byte es 900.000.000
        flotante=(float)900000000;
        System.out.println("flotante="+flotante);
        
        float flotante2;
        flotante2=900000000f;
        System.out.println("flotante2="+flotante2);
        
        double doble;
        doble=9000000;
        System.out.println("doble="+doble);
        
        char caracter;
        caracter='c';
        System.out.println("caracter="+caracter);
        
        boolean boleano;
        boleano=false;
        System.out.println("boleano="+boleano);
    }
    
}
