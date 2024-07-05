#include<iostream>

using namespace std;


//creacion de la superclass
class Animales{
	
	protected:
		int id;
		string nombre;
		int edad;
		int Ano_nacido;
		int numPatas;
		
	public:
		//constructor de de superclass
		Animales(int id,string nombre,int edad){
			this->id=id;
			this->nombre=nombre;
			this->edad=edad;
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


class Perro:public Animales{
	private:
		string raza;
		string color;
	public:
		Perro(int id,string nombre,int edad,string raza,string color):Animales(id,nombre,edad){
			this->raza=raza;
			this->color=color;
		}
		void Datos(){
			cout<<"No.id :"<<this->id<<endl;
			cout<<"Nombre :"<<this->nombre<<endl;
			cout<<"Edad :"<<this->edad<<" Anos"<<endl;
			cout<<"raza :"<<this->raza<<endl;
			cout<<"color :"<<this->color<<endl;
		}	 	
};

int main(){
	/*
	Animales Perro(1,"Canelo"); 
	Perro.Datos();
	*/
	
	Perro obj1 (1,"panchito",1,"cruze","gris");
	obj1.Datos();
	
	return 0;
}
