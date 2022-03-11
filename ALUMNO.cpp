#include "PERSONA.cpp"
#include <iostream>
using namespace std;

class Alumno : Persona {
	
	private : string codigo,curso;
			  float nota1, nota2, nota3, nota4, promedio;
	
	public : 
	Alumno(){
	}
	
	Alumno(string nom,string ape, string co, string cso, float n1, float n2, float n3, float n4, float p) : Persona(nom,ape){
		codigo = co;
		curso = cso;
		nota1 = n1;
		nota2 = n2;
		nota3 = n3;
		nota4 = n4;
		promedio = p;
		p = (n1+n2+n3+n4)/4;
	}
	//set
	void setCodigo(string co){codigo = co;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setCurso(char cso){curso = cso;}
	void setNota1(float n1){nota1 = n1;}
	void setNota2(float n2){nota2 = n2;}
	void setNota3(float n3){nota3 = n3;}
	void setNota4(float n4){nota4 = n4;}	
	void setPromedio(float p){promedio = p;}
	
	//get
	string getCodigo(){return codigo;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getCurso(){return curso;}
	float getNota1(){return nota1;}
	float getNota2(){return nota2;}
	float getNota3(){return nota3;}
	float getNota4(){return nota4;}	
	float getPromedio(){return promedio;}			
	
	//
	void mostrar (){
		cout<<"_____________Datos Del Alumno__________________"<<endl;
		cout<<"Codigo: "<<codigo<<",  Nombre: "<<nombres<<",  Apellido: "<<apellidos<<",  Curso: "<<curso<<",  El promedio es: "<<promedio<<endl;
		
	}
};
