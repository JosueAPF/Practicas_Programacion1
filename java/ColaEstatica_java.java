class Cola{
   public int size;
   public int frente,fondo;
   public int[] cola;
   
   //constructor
   public Cola(){
      size = 5;
      cola = new int[size];
      frente=-1;
      fondo=-1;
   }
   public void Encolar(int x){
      if(fondo>=(size-1)){
         System.out.println("la cola esta llena");
      }else{
         fondo++;
         frente=0;
         cola[fondo]=x;
         System.out.println("encolando :"+ x);
      }
   }
   
   public void Recorrido(){
      if(fondo==-1){
         System.out.println("la cola esta vacia");
      }else{
         System.out.println("Recorriod de la cola");
         for(int i=frente;i<=fondo;i++){
            System.out.println(cola[i]);
         }
      }
   }
   
   public int Desencolado(){
      System.out.println("Desencolado de un elemento :"+fondo);
      return fondo--;
   
   }

}


public class ColaEstatica_java{
   public static void main(String[] args){
      Cola cola = new Cola();
      //proceso de encolado
      for(int i=0;i<4;i++){
         cola.Encolar(i);
      }
      
      //recorrido de la cola
      cola.Recorrido();
      
      //desencolado de la cola
      cola.Desencolado();
      
      //recorrido de la cola
      cola.Recorrido();

   }
}