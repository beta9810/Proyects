/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package proyecto1;

import java.util.Scanner;

/**
 *
 * @author BeTa
 */
public class operadores_aritmeticos {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner entrada=new Scanner(System.in);
        float num1,num2,suma,resta,mul,div,resid;
        System.out.println("Ingresa 2 numeros");
        num1=entrada.nextFloat();
        num2=entrada.nextFloat();
        suma=num1+num2;
        resta=num1-num2;
        mul=num1*num2;
        div=num1/num2;
        resid=num1%num2;
        System.out.println("Suma: "+suma);
        System.out.println("Resta: "+resta);
        System.out.println("Multiplicacion: "+mul);
        System.out.println("Division: "+div);
        System.out.println("Residuo: "+resid);
    }
    
}
