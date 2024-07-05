#include<iostream>

using namespace std;



//creacion de la clase
class Animales{
	
	private:
		int id;
		string nombre;
		string color;
		int edad;
		int Ano_nacido;
		int numPatas;
		
	public:
		//constructor
		Animales(int id,string nombre){
			this->id=id;
			this->nombre=nombre;
			/*
			this->color="";
			this->edad=0;
			this->Ano_nacido=0;
			this->numPatas=0;
			*/
		}
		
		void Datos(){
			cout<<"No.Id :"<<this->id<<endl;
			cout<<"Nombre :"<<this->nombre<<endl;
		}
};


int main(){
	Animales Perro(1,"Canelo"); 
	Perro.Datos();
	
	return 0;
}
