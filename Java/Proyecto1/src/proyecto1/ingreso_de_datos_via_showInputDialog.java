/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package proyecto1;

import javax.swing.JOptionPane;

/**
 *
 * @author BeTa
 */
public class ingreso_de_datos_via_showInputDialog {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //String cadena=JOptionPane.showInputDialog("Ingresa una Cadena");
        //JOptionPane.showMessageDialog(null, "Este es tu cadena: "+cadena);
        
        //int entero= Integer.parseInt(JOptionPane.showInputDialog("Ingresa un entero"));
        //JOptionPane.showMessageDialog(null, "Este es tu entero: "+entero);
        
        //float flotante= Float.parseFloat(JOptionPane.showInputDialog("Ingresa un flotante"));
        //JOptionPane.showMessageDialog(null, "Este es tu flotante: "+flotante);
        
        //double doble= Double.parseDouble(JOptionPane.showInputDialog("Ingresa un double"));
        //JOptionPane.showMessageDialog(null, "Este es tu double: "+doble);
        
        char caracter=JOptionPane.showInputDialog("Ingresa un caracter").charAt(0);
        JOptionPane.showMessageDialog(null, "Este es tu caracter: "+caracter);
    }
    
}
