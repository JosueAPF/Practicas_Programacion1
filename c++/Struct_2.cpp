#include<iostream>
#include<string>

using namespace std;


struct Estructura{
	string nombre;
	int edad;
	int fecha[3];
	
}Estruct[2];


int main(){
	cout<<"---ingese lo solicitado---"<<endl;
	for(int i=0;i<2;i++){
		cout<<"Ingrese el Nobre :"<<endl;
		cin>>Estruct[i].nombre;
		cout<<"Ingrese la Edad :"<<endl;
		cin>>Estruct[i].edad;
		
		cout<<"Dia :"<<endl;
		cin>>Estruct[i].fecha[0];
		
		cout<<"Mes :"<<endl;
		cin>>Estruct[i].fecha[1];
		
		cout<<"Año :"<<endl;
		cin>>Estruct[i].fecha[2];
	}
	
	return 0;
}


/*#include<iostream>

using namespace std;

struct Prod
{
    int cod;
    char nombre[60];
    float precio;
}producto[4];

void ingreso(){
    for (int x=0;x<3;x++)
    {
        cout<<"ingrese el codigo del producto :"<<endl;
        cin>>producto[x].cod;
        cout<<"ingrese el nombre del producto :"<<endl;
        cin.getline(producto[x].nombre,60);
        cout<<"ingrese el precio del producto :"<<endl;
        cin>>producto[x].precio;       
    }


    for(int y=0;y<3;y++){
        cout<<"Nombre :"<<producto->nombre;
        cout<<"Codigo del Producto :"<<producto->precio;
        cout<<"precio del producto :"<<producto->precio;
    }
    
}



int main(){
    ingreso();
    return 0;
}


*/
