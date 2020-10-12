#include"Estudiante.cpp"
#include<iostream>
using namespace std;
main(){
	string carnet,nombres,apellidos, carrera,seccion;
	int telefono;
	cout<<"Ingrese su No. de carnet: "<<endl;
	cin>>carnet;
	cout<<"Ingrese un nombre: "<<endl;
	cin>>nombres;
	cout<<"Ingrese un apellidos: "<<endl;
	cin>>apellidos;
	cout<<"Ingrese su carrera:" <<endl;
	cin>>carrera;
	cout<<"Ingrese su seccion:" <<endl;
	cin>>seccion;
	cout<<"Ingrese su numero de Telefono: "<<endl;
	cin>>telefono;
	
	
	Estudiante obj = Estudiante (carnet,nombres,apellidos,carrera, seccion,telefono);
	obj.mostrar();
	
	
	cout<<"--------- Modificar ------------"<<endl;
	cout<<"Ingrese su No. de carnet: "<<endl;
	cin>>carnet;
	cout<<"Ingrese un nombres: "<<endl;
	cin>>nombres;
	cout<<"Ingrese un apellidos: "<<endl;
	cin>>apellidos;
	cout<<"Ingrese su carrera: "<<endl;
	cin>>carrera;
	cout<<"Ingrese su seccion: "<<endl;
	cin>>seccion;	
	cout<<"Ingrese su numero de Telefono: "<<endl;
	cin>>telefono;
	
	obj.setCarnet(carnet);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setCarrera(carrera);
	obj.setSeccion(seccion);
	obj.setTelefono(telefono);



			
	
	cout<<obj.getCarnet()<<endl;
	cout<<obj.getNombres()<<endl;
	cout<<obj.getApellidos()<<endl;
	cout<<obj.getCarrera()<<endl;
	cout<<obj.getSeccion()<<endl;
	cout<<obj.getTelefono()<<endl;

	
}

