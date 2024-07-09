/*
1. Gestión de Contactos
Crear una estructura llamada contactoEmail que tenga las siguientes características: nombres completos, 
sexo, edad, teléfono, email, nacionalidad
El programa debe constar de un menú que permita:
a) Agregar un contacto
b) Eliminar un contacto
c) Mostrar listado general de contactos registrados hasta ese momento.
d) Mostrar listado de contactos existentes, ordenado por servidor de correo de las cuentas (gmail.com, 
outlook.com, yahoo.com, etc.)
e) Salir del programa
El programa debe mantenerse en ejecución continuamente hasta que usuario indique que desea salir del 
mismo.
*/

#include <iostream>
#include <string.h>
using namespace std;

int main () {
	int respuesta;
	
	do{
			cout<<"Gestion de contactos"<<endl;
			cout<<endl<<"Digite una de las siguientes opciones: "<<endl; 
			cout<<"1- Agregar un contacto. "<<endl; 
			cout<<"2- Eliminar un contacto. "<<endl; 
			cout<<"3- Mostrar contactos. "<<endl; 
	  		cout<<"4- Mostrar contactos, ordenado correo electronico. "<<endl; 
		   	cout<<"5- Salir del programa. "<< endl; 
		   	cout<<"\nIngrese una opcion: "<<endl;
  	   		cin>>respuesta;

  	   	
	} while (respuesta != 5); 
	
	return 0;
}

