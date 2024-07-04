#include<iostream>

using namespace std;


void recorrido(int arrg[2][3],int fila,int col){
	for(fila=0;fila<2;fila++){
		for(col=0;col<3;col++){
			cout<<arrg[fila][col]<<"";
		}
		cout<<endl;
	}
}
int main(){
	int arr[2][3];
	int fila,col;
	
	for(fila=0;fila<2;fila++){
		for(col=0;col<3;col++){
			cout << "Ingrese los datos [" << fila + 1 << "][" << col + 1 << "]: ";
			cin>>arr[fila][col];
		}
	}
	
	recorrido(arr,fila,col);
	
	return 0;
}
