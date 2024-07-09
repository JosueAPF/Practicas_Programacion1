import java.util.Scanner;



/*super class OperacionesBasicas*/
class OperacionesBasicas{
   public int suma;
   public int resta;
   public int div;
   public int multi;
   
   
   public OperacionesBasicas(){
      suma = 0;
      resta=0;
      div=0;
      multi=0;
   }
   
   public int Sum(int num1,int num2){
      suma = num1+num2;
      return suma;
   }
   public int Res(int num1,int num2){
      resta = (num1-num2);
      return resta;
   }

}



public class OpBasicas{
   public static void main(String[] args){
      //instancia de la superClass
      OperacionesBasicas operacion = new OperacionesBasicas();
      Scanner in = new Scanner(System.in);
      //variables
      boolean varbool = true;
      int opcion;
            
      //procedimento
      while(varbool){
         //ingreso de opciones
         System.out.println("ingreso de opciones");
         System.out.println("Procedimiento #1");
         System.out.println("Procedimiento #2");
         opcion = in.nextInt();      
         switch(opcion){
            case 1:
               System.out.println("Operacion 1 : "+operacion.Sum(1,1));
               break;
            case 2:
               System.out.println("Operacion 2 : "+operacion.Res(2,1));
               break;
            case 3:
                System.out.println("salir");
                varbool=false;
                break;
            default:
               System.out.println("-------");
               break;
         }
      }   
   }
}

