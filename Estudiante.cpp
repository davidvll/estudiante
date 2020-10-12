#include "Persona.cpp"
#include<iostream>

using namespace std;
class Estudiante:Persona{
	// Atributos
	private : string carnet,carrera,seccion;
	public: 
	//Constructor
	
		Estudiante(string car,string nom,string ape,string carr,string secc,int tel):Persona(nom,ape,tel){
			carnet=car;
			carrera=carr;
			seccion=secc;
		}
	//modificar (set)
	void setCarnet(string car){carnet=car;}	
	void setNombres(string nom){nombres=nom;}
	void setApellidos(string ape){apellidos=ape;}	 
	void setCarrera (string carr){carrera=carr;}
	void setSeccion(string secc){seccion=secc;}
	void setTelefono(int tel){telefono=tel;}	 
	 //mostrar (get) 
	 	string getCarnet(){return carnet;}
	 	string getNombres(){return nombres;}
	 	string getApellidos(){return apellidos;}
	 	string getCarrera(){return carrera;}
		string getSeccion(){return seccion;}	 	
	 	int getTelefono(){return telefono;}	
	// Metodos
		void mostrar(){
cout<<"-----------------------------------------------"<<endl;
cout<<carnet<<","<<nombres<<", "<<apellidos<<", "<<carrera<<","<<seccion<<","<<telefono<<endl;
}
};


