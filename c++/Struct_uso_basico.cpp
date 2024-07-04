/*uso basico de */

#include<iostream>
#include<string>

using namespace std;


struct Datos{
	string nombre;
	string apellido;
	int edad;
	int fecha[3];
};

int main(){
	//instanciar la estructura de datos
	Datos datos;
	
	//cargar los datos
	datos.nombre="juan";
	datos.apellido ="perez";
	datos.edad = 19;
	datos.fecha[0]=4;
	datos.fecha[1]=07;
	datos.fecha[2]=24;
	
	//mostrando los datos
	cout<<"Nombre :"<<datos.nombre<<endl;
	cout<<"Apellida :"<<datos.apellido<<endl;
	cout<<"edad :"<<datos.apellido<<endl;
	cout<<"fecha :"<<datos.fecha[0]<<"/"<<datos.fecha[1]<<"/"<<datos.fecha[2]<<endl;
	return 0;
}
