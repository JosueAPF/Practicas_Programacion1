//operaciones basicas 
import java.util.Scanner;


class CadenasDeclaracion{
   protected String Cadena1;
   protected String Cadena2;
   protected int opc;
   protected Scanner in;
   
   public CadenasDeclaracion(){
      Cadena1 = "hola";
      Cadena2 = "MUNDO";
      in = new Scanner(System.in);
   }
}

class OperacionsCadenas extends CadenasDeclaracion{
   
   public void Concatenacion(){
      System.out.println("Operacion : -Concatenacion-");
      System.out.println(Cadena1+" "+Cadena2);
   }
   
   public void Convercion(){
      System.out.println("Ingrese un opcion");
      System.out.println("1. Convertir a mayuscula");
      System.out.println("2. convertir a minuscula");
      opc = in.nextInt();
      switch(opc){
         case 1:
            System.out.println("-Mayuscula-");
            System.out.println(Cadena1.toUpperCase());
            break;
         case 2:
            System.out.println("-Minuscula-");
            System.out.println(Cadena2.toLowerCase());
            break;
         default:
            break;
      }
   }

}

public class Cadenas{
	public static void main(String[] args){
      OperacionsCadenas cadena = new OperacionsCadenas();
      cadena.Concatenacion();
      cadena.Convercion();
	} 
	
}
