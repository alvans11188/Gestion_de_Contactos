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
struct contactoEmail{
	string nombrecompleto;
	string sexo;
	int edad;
	int telefono;
	string email;
	string nacionalidad;
	 
};



int main () {
	int respuesta;
	contactoEmail contacto;
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
			switch (respuesta) {
				case 1: 
   			  	 	cout<<"Digite sus nombres completos: "; 
   			  	 	cin.ignore(); 
   			  	 	getline(cin,contacto.nombrecompleto);  
   			  	 	cout<<"Ingrese su sexo: "; 
   			  	 	getline(cin,contacto.sexo); 
   			  		cout<<"Ingrese su edad: "; 
   			  	 	cin>>contacto.edad; 
   			  	 	cout<<"Ingrese su telefono: "; 
   			  	 	cin>>contacto.telefono; 
				 	cout<<"Ingrese su email: "; 
				 	cin>>contacto.email;  
				 	cout<<"Ingrese su nacionalidad: "; 
				 	cin>>contacto.nacionalidad ; 
				 	cout<<"\n"; 

				 cout<<"\nNombre completos:"<<contacto.nombrecompleto<<endl;  
				 cout<<"Sexo: "<<contacto.sexo<<endl; 
				 cout<<"Edad: "<<contacto.edad<<endl; 
				 cout<<"Telefono: "<<contacto.telefono<<endl; 
				 cout<<"Email: "<<contacto.email<<endl; 
				 cout<<"Nacionalidad: "<<contacto.nacionalidad<<endl; 

				 default: 
				 	break;  
  	   		
			}
  	   	
	} while (respuesta != 5); 
	
	return 0;
}

