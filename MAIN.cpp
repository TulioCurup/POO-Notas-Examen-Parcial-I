#include "ALUMNO.cpp"
#include <iostream>
using namespace std;
main(){
	string codigo, nombres, apellidos,curso;
	float nota1, nota2, nota3, nota4, promedio;
	int opcion;
	opcion = 1;
	while (opcion == 1)
	{
	system("cls");
	cout<<"Bienvenido al sistema de alumnos";	
	cout<<"\n ingresar Codigo: ";
	cin>>codigo;
	cout<<"ingresar Nombre: ";
	cin>>nombres;
	cout<<"ingresar Apellido: ";
	cin>>apellidos;
	cout<<"ingresar Nombre de Curso: ";
	cin>>curso;
	cout<<"ingresar Nota 1: ";
	cin>>nota1;
	cout<<"ingresar Nota 2: ";
	cin>>nota2;
	cout<<"ingresar Nota 3: ";
	cin>>nota3;
	cout<<"ingresar Nota 4: ";
	cin>>nota4;
	promedio = (nota1+nota2+nota3+nota4)/4;

	//instancia del objeto
	Alumno obj = Alumno(nombres,apellidos,codigo,curso,nota1, nota2, nota3, nota4,promedio);
	obj.mostrar();
	//condicion aprobado - reprobado
	
	if (promedio > 60) {
		cout<<"\n El estudiante aprobo el curso";
	}
	else{
		cout<<"\n El estudiante reprobo el curso";
	}
	
	cout<<"\n\n Quieres ingresar otro alumno?";
	cout<<"\n Escriba 1 para si y 2 para no:  ";
	scanf("%d",&opcion);
	
	}
	system("cls");
	cout<<"Muchas Gracias, Tenga Buen Dia";
	return 0;
}
