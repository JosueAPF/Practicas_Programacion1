//arraya unidimencional

public class Array_unidimencional{
   public static void main(String[] args){
      int array[] = new int[5]; 
      int i=0;
      
      //tamaño del array
      int tamanoarray = arraySize(array);
      System.out.println(tamanoarray);
      
      //insercion de elementos
      while(i<5){
         insercion(i,array);
         i++;
      }      
      //recorriod del array
      recorrido(array);
      
   }
   
   //funcion para obtener el tamaño del array
   static int arraySize(int arrg[]){
      return arrg.length;
   }
   //metodo para insertar elementos en el array
   static void insercion(int x,int arr[]){
      for(int i=0;i<5;i++){
         arr[i]=x;
      }
   }
   //recorrido del arreglo
   static void recorrido(int arr[]){
      for(int i=0; i<=4;i++){
         System.out.println("Elementos en la posicion ["+i+"] "+arr[i]);
      }
   }
}