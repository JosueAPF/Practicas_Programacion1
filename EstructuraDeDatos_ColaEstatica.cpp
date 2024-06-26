#include<iostream>

using namespace std;

class Cola{
	private:
		int size;
		int inicio,fin;
		int cola[5];
	public:
		Cola(){
			size = 5;
			inicio=-1;
			fin=-1;
		}
		void Encolar(int x){
			if(fin>=(size-1)){
			cout<<"la cola esta llena";
			}else{
				fin++;
				inicio = 0;
				cola[fin]=x;
			}
			cout<<"elemento :"<<x<<" agregado"<<endl;
		}
		void Recorrido(){
			if(fin == -1){
				cout<<"la cola esta vacia"<<endl;
			}else{
				cout<<"Recorrido de la cola"<<endl;
				for(int i=inicio;i<=fin;i++){
					cout<<cola[i]<<endl;
				}
				cout<<""<<endl;	
			}	
		}
		
		 int Desencolar(){
		 	cout<<"proceso de desencolado"<<endl;
			if(fin == -1){
				cout<<"la cola esta vacia";
			}else{
				return fin--;
				
			}
		}
};



int main(){
	Cola cola;
	for(int i=0;i<5;i++){
		cola.Encolar(i);	
	}
	cola.Recorrido();
	cola.Desencolar();
	cola.Recorrido();
	
	return 0;
}
