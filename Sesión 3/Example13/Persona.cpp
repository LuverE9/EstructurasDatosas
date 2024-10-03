#include "Persona.hpp"

void Persona::setGenero(bool g)
{
	this -> genero = g;
}

void Persona::setDNI(char list[10])
{
	this -> dni[10] = list[10];
}

Persona::Persona(int e)
{
	this -> setEdad(e);
	int genId = rand() % 2;
	if(genId==1)
	{
		this -> setGenero(true);
	}
	else
	{
		this -> setGenero(false);
	}
	//char n1, n2, n3, n4, n5, n6, n7, n8, n9;
	//n0 = rand() % 10;
	//n1 = rand() % 10;
	//n2 = rand() % 10;
	//n3 = rand() % 10;
	//n4 = rand() % 10;
	//n5 = rand() % 10;
	//n6 = rand() % 10;
	//n7 = rand() % 10;
	//n8 = rand() % 10;
	//n9 = rand() % 10;
	
	//cout << n1 << n2 << n3 << n4 << n5 << n6 << n7 << n8 << n9 << endl;
	
	//char newDNI[10] = {n1, n2, n3, n4, n5, n6, n7, n8, n9};
	//cout << "old dni: " << this -> dni << endl;
	//cout << "replacement dni: " << newDNI << endl;
	//this -> setDNI(newDNI);
	//cout << "new dni: " << this -> dni << endl;
}

Persona::~Persona()
{
}

int Persona::getEdad()
{
	return this -> edad;
}

bool Persona::esMujer()
{
	bool genero = this -> genero;
	if(!genero)
		return true;
	else
		return false;
	
}

void Persona::setEdad(int e)
{
	this -> edad = e;
}

void Persona::mostrar()
{
	cout << "Datos de la persona" << endl;
	cout << "Genero: ";
	if(genero)
		cout << "Masculino" << endl;
	else
		cout << "Femenino" << endl;
	cout << "DNI:. " << this -> dni << endl;
	cout << "Edad: " << this -> edad << " anyos" << endl << endl;
}