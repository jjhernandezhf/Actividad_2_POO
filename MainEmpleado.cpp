#include "Empleado.cpp"
#include <iostream>
using namespace std;
main(){
	string puesto,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono,codigo_empleado,op;
	
	cout<<"Ingresar Puesto: ";
	cin>>puesto;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar Codigo de empleado: ";
	cin>>codigo_empleado;
	cout<<"Ingresar su fecha de nacimiento: ";
	cin>>fecha_nacimiento;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	//isntancia de un objeto
	Empleado obj = Empleado(nombres,apellidos,direccion,fecha_nacimiento,telefono,puesto,codigo_empleado);
	obj.mostrar();
	
	
	cout<<"Ingrese su nuevo puesto: ";
	cin>>puesto;
	obj.setPuesto(puesto);
	obj.mostrar();
	
		cout<<"menu de opciones";
	cout<<"Opcion 1. crear";
	cout<<"Opcion 2. leer";
	cout<<"Opcion 3. actualizar";
	cout<<"Opcion 4. borrar";
	cout<<"ingrese la opcion que quiere";
	cin>>op;
	
	if (op == 1){
		cout<<"usted eligio crear";
	}
	
	if (op == 2){
		cout<<"usted eligio leer";
	}
	if (op == 3){
		cout<<"usted eligio actualizar";
	}
	if (op == 4){
		cout<<"usted eligio borrar";
	}
	

	
	
	
	}
