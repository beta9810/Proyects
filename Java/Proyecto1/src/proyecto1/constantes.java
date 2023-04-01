
package proyecto1;

/**
 *
 * @author BeTa
 */
public class constantes {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        final Byte mordida;//El valor maximo para byte es 127
        mordida=(byte)126.55;//Esto se llama casting y sirve para convertir un entero a decimal
        System.out.println("mordida="+mordida);
        
        final float pi=3.1415f;//Hace la variable constante, estatica, ya no la permite cambiar
        float res=pi*2;
        System.out.println("pi*2="+res);
        
        Short corto;//El valor maximo para byte es 32000
        corto=32000;
        System.out.println("corto="+corto);
        
        Integer entero;//El valor maximo para byte es 2.0000.000.000
        entero=2000000000;
        System.out.println("entero="+entero);
        
        Long largo;//El valor maximo para byte es 900.000.000
        largo=(long)900000000;
        System.out.println("largo="+largo);
        
        Float flotante;//El valor maximo para byte es 900.000.000
        flotante=mordida.floatValue();
        System.out.println("flotante="+flotante);
        
        Float flotante2;
        flotante2=900000000f;
        System.out.println("flotante2="+flotante2);
        
        Double doble;
        doble=90000.00;
        System.out.println("doble="+doble);
        
        char caracter;
        caracter='c';
        System.out.println("caracter="+caracter);
        
        Boolean boleano;
        boleano=false;
        System.out.println("boleano="+boleano);
        
        String cadena;
        cadena="hola hermosillo";
        System.out.println("cadena="+cadena);
    }
    
}
