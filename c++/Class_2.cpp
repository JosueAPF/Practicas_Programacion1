#include<iostream>
#include<string>

using namespace std;


//super class
class Persona{

//encapsulamiento

	//proceso de abstraccion
	protected:
		string Nombre;
		string Ape;
		int edad;
		float peso,altura;
		int ano_nacim;
	public:
		Persona(string Nombre,string Ape,int edad,float peso,float altura,int ano_nacim){
			this->Nombre = Nombre;
			this->Ape = Ape;
			this->edad  = edad;
			this->peso = peso;
			this->altura = altura;
			this->ano_nacim = ano_nacim;
		}
		
		
		void Datos(){
			cout<<"Datos cmpletos de :"<<this->Nombre<<endl;
			cout<<"Apellido :"<<this->Ape<<endl;
			cout<<"Edad :"<<this->Ape<<endl;
			cout<<"Peso :"<<this->peso<<endl;
			cout<<"Altura :"<<this->altura<<endl;
			cout<<"Año de nacimiento :"<<this->ano_nacim<<endl;
			cout<<endl;
		}
		
		string myNombre(){
			return this->Nombre;
		}
};


//sub class
class jose:public Persona{
	private:
		string SegApellido;//segundo apellido
	public:
		jose(string SegApellido,string Nombre,string Ape,int edad,float peso,float altura,int ano_nacim):Persona(Nombre,Ape,edad,peso,altura,ano_nacim){
			this->SegApellido = SegApellido;
		}
		
		void fulldata(){
			cout<<"Datos cmpletos de :"<<this->Nombre<<endl;
			cout<<"Apellido :"<<this->Ape<<endl;
			cout<<"Second Apellido :"<<this->SegApellido<<endl;
			cout<<"Edad :"<<this->Ape<<endl;
			cout<<"Peso :"<<this->peso<<endl;
			cout<<"Altura :"<<this->altura<<endl;
			cout<<"Año de nacimiento :"<<this->ano_nacim<<endl;
			cout<<endl;
		}
};


//otra subclass
class julia:public Persona{
	private:
		string sexo;
		
	public:
		julia(string sexo,string Nombre,string Ape,int edad,float peso,float altura,int ano_nacim):Persona(Nombre,Ape,edad,peso,altura,ano_nacim){
			this->sexo = sexo;
		}
		string mysex(){
			return this->sexo;
		}
}; 

int main(){
	jose obj1("perez","jose","Hernandez",18,2.5,1.60,1800);
	julia obj2("babosa","julia","perez",28,2.1,1.80,1900);
	
	obj1.fulldata();
	cout<<endl;
	obj2.Datos();
	cout<<"Sexo :"<<obj2.mysex()<<endl;
	return 0;
}
