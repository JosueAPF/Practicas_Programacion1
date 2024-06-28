#include<iostream>

using namespace std;

class Pila{
	private:
		int size;
		int tope;
		int pila[];
		
	public:
		Pila(){
			size = 5;
			tope = -1;
			pila[size];
		}
	void push(int x){
		if(tope >=(size-1)){
			cout<<"Esta llena la pila";
		}else{
			tope++;
			pila[tope]=x;
		}
	}
	
	void Recorrido(){
		cout<<"Recorrido"<<endl;
		if(tope==-1){
			cout<<"la pila esta vacia";
		}else{
			for(int i=tope;i>=0;i--){
				cout<<pila[i]<<endl;
			}
		}
	}
	
	int Pop(){
		return tope--;
	}
};


int main(){
	//proceso de instanciar 
	Pila pilas;
	for(int i=1;i<=5;i++){
		pilas.push(i);
	}
	pilas.Recorrido();
	pilas.Pop();
	pilas.Recorrido();
}
