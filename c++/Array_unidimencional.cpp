//array unidimencional simple
#include<iostream>


using namespace std;

//mostrando los datos
void Recorrido(int arrg[]){
	for(int i=0;i<=4;i++){
		cout<<arrg[i];
	}
}

int main(){
	//creacion del array unidimencional y asignacion del tamaño
	int arr[5];
	
	arr[0]=1;
	arr[1]=2;
	arr[2]=3;
	arr[3]=4;
	arr[4]=5;
	Recorrido(arr);
	return 0;
}
