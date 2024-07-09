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

const int limitecontacto = 20;

struct contactoEmail{
	string nombrecompleto;
	string sexo;
	int edad;
	int telefono;
	string email;
	string nacionalidad;
	 
};
void agregarcontacto(contactoEmail contacto[], int &cantidadcontacto) {
	if (cantidadcontacto >= limitecontacto){
		cout << "Sin espacio suficiente"; 
		return;
	}
	
	contactoEmail nuevocontacto;
	cout<<"Digite sus nombres completos: "; 
   	cin.ignore(); 
   	getline(cin,nuevocontacto.nombrecompleto);  
   	cout<<"Ingrese su sexo: "; 
   	getline(cin,nuevocontacto.sexo); 
    cout<<"Ingrese su edad: "; 
   	cin>>nuevocontacto.edad; 
   	cout<<"Ingrese su telefono: "; 
   	cin>>nuevocontacto.telefono; 
	cout<<"Ingrese su email: "; 
	cin>>nuevocontacto.email;  
	cout<<"Ingrese su nacionalidad: "; 
	cin>>nuevocontacto.nacionalidad ; 
	cout<<"\n"; 
	cout << "contacto guardado"<<endl;
	contacto[cantidadcontacto] = nuevocontacto;
	cantidadcontacto++;
}
void mostrarcontacto(contactoEmail contacto[],int cantidadcontacto){
	if(cantidadcontacto == 0){
		cout<<"\nNingun contacto para mostrar. "<<endl;
	}
	else{
	   for(int i=0; i<cantidadcontacto; ++i){
	   	cout<<"Contacto: "<<i+1<<endl; 
	   	cout<<"Nombres completos: "<<contacto[i].nombrecompleto<<endl;
	   	cout<<"Sexo: "<<contacto[i].sexo<<endl; 
	   	cout<<"Edad: "<<contacto[i].edad<<endl; 
	   	cout<<"Telefono: "<<contacto[i].telefono<<endl; 
	   	cout<<"Email: "<<contacto[i].email<<endl; 
	   	cout<<"Nacionalidad: "<<contacto[i].nacionalidad<<endl; 
	   	cout<<"\n"; 
	   }
	}
}


void eliminarcontacto(contactoEmail contacto[], int &cantidadcontacto, int indice){
	if(indice>=0 && indice < limitecontacto){
		for(int i=indice; i< cantidadcontacto -1; i++){
			contacto[i] = contacto [i+1];
		}
		cantidadcontacto--;
		cout << "\nContacto eliminado"<< endl;
	} else {
		cout << "\nIndice no valido" << endl;
	}
}
string obtenerDominio(const string& email){
    int buscarroba=-1;
    for (int i=0;i<email.length();++i){
        if(email[i]=='@') {
            buscarroba=i;
            break;
        }
    }
    if(buscarroba == -1){
        return "";
    }
    string dominio = "";
    for(int i = buscarroba + 1; i<email.length();++i){
        dominio+=email[i];
    }
    return dominio;
}

void ordenServidor(contactoEmail contacto[], int cantidadcontacto) {
    for (int i = 0; i<cantidadcontacto - 1; ++i) {
        for (int j = 0; j<cantidadcontacto - 1 - i; ++j) {
            if (obtenerDominio(contacto[j].email)>obtenerDominio(contacto[j + 1].email)){
                contactoEmail temp =contacto[j];
                contacto[j]=contacto[j + 1];
                contacto[j+1]=temp;
            }
        }
       
	}
	
	}

int main () {
	int respuesta;
	contactoEmail contacto[limitecontacto];
	int cantidadcontacto=0;
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
   			  	 	agregarcontacto(contacto, cantidadcontacto);
					break;
				case 2:
					int indice;
					cout << "Ingrese indice del contacto a eliminar, Comenzar del 0" << endl;
					cin >> indice;
					eliminarcontacto(contacto, cantidadcontacto, indice);
					break;
				case 3:
					mostrarcontacto(contacto, cantidadcontacto);
					break;
				case 4:
					if(cantidadcontacto == 0){
					cout<<"\nNingun contacto por mostrar. "<<endl;
					}
     	            cout<<"\nMOSTRANDO CONTACTOS SEGUN EL ORDEN POR SERVIDOR: \n"; 
  		 	        ordenServidor(contacto, cantidadcontacto); 
                    mostrarcontacto(contacto, cantidadcontacto); 
				default: 
				 	break;  
  	   		
			}
  	   	
	} while (respuesta != 5); 
	
	return 0;
}

