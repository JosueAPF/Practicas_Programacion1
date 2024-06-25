class Pila{
   public int size;
   public int tope;
   public int[] pila;
   
   public Pila(){
      size = 5;
      tope = -1;
      pila = new int[size];
   }
   
   public void Push(int x){
      if(tope >=(size-1)){
         System.out.println("la pila esta llena");
      }else{
         tope++;
         pila[tope]=x;
      }
   }
   public void Recorrido(){
      if(tope==-1){
         System.out.println("La pila esta vacia");
      }else{
         System.out.println("Recorrido de la pila");
         for(int i=tope;i>=0;i--){
            System.out.println(pila[i]);
         }
      }
   }

}


public class PilaEstatica_java{
   public static void main(String[] args){
      Pila EstructPila = new Pila();
      //insercion de la pila;
      System.out.println("Proceso de insercion de la pila");
      for(int i=1;i<=5;i++){
         EstructPila.Push(i);
      }
       EstructPila.Recorrido();
      
     
      
   }
}