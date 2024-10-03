#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <iostream>
//#include <ctime>
using namespace std;

class Persona
{
public:
    Persona(int edad);
    ~Persona();
    int getEdad();
    bool esMujer();
    void setEdad(int edad);
    void mostrar();
	
	void setGenero(bool genero);
	void setDNI(char dni[10]); 

private:
    bool genero;
    int edad;
	char dni[10] = {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'};
	
	 //srand(time(0));
	
	//char n1, n2, n3, n4, n5, n6, n7, n8, n9; - Intento de generar automaticamente el valor del DNI
	//char n1 = rand() % 10 + 48;
	//char n2 = rand() % 10 + 48;
	//char n3 = rand() % 10 + 48;
	//char n4 = rand() % 10 + 48;
	//char n5 = rand() % 10 + 48;
	//char n6 = rand() % 10 + 48;
	//char n7 = rand() % 10 + 48;
	//char n8 = rand() % 10 + 48;
	//char n9 = rand() % 10 + 48;
	
	//std::cout << n1 << n2 << n3 << n4 << n5 << n6 << n7 << n8 << n9;
	
    //char dni[10] = {n1, n2, n3, n4, n5, n6, n7, n8, n9};
};

#endif // PERSONA_HPP
