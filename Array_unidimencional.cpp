#include<iostream>
using namespace std;

//clase array unidimencional
//ingreso 
class ArrgUni{
	public:
		int arrg[5];		
		void addData(int x){
			arrg[0]=x;
		}
};

//sub clase para el recorrido
class Recorrido:public ArrgUni {
	public:
		void recorridoArray(){
			for(int i=0;i<5;i++){
				cout<<"Recorrido :"<<arrg[i]<<endl;
			}
		}
};

int main(){
	ArrgUni Array;
	Recorrido recorrido;
	Array.addData(1);
	Array.addData(2);
	Array.addData(3);
	recorrido.recorridoArray();
	return 0;
}
