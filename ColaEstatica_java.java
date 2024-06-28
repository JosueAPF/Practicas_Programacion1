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

}


public class ColaEstatica_java{
   public static void main(String[] args){
      Cola cola = new Cola();
      //proceso de encolado
      for(int i=0;i<4;i++){
         cola.Encolar(i);
      }
   }
}