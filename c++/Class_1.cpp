#include<iostream>
#include<string>

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
		void hacerRuido(){
			cout<<this->nombre<<" ha hecho ruido"<<endl;
		}
};


class Perro:public Animales{
	protected:
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
		void hacerRuido(){
			cout<<this->nombre<<"va hacer ruido"<<endl;
			cout<<"Guaw Guaw"<<endl;
		}
			 	
};


class Gato:public Perro{
	private:
		//string toy[3];
	public:
		Gato():Perro(id,nombre,edad,raza,color){

		}
		void hacerRuido(){
			cout<<"Esta haciendo ruido"<<endl;
		}		
};


int main(){
	/*
	Animales Perro(1,"Canelo"); 
	Perro.Datos();
	*/
	
	//perro
	Perro obj1 (1,"panchito",1,"cruze","gris");
	obj1.Datos();
	
	//gato
	//Gato obj2(2,"juanita",4,"cruze","verde");
	//obj2.Datos();
	return 0;
}
