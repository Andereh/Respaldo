/*
    Hacer un programa que lea la entradada y de dos numeros y digite el resultado de la Suma,Resta,Multiplicaci�n y Divisi�n
    de los numeros en cuesti�n...
*/

#include <iostream>

using namespace std;

int main() {
	
	cout<< "Bienvenido :D"<<endl;
	
	//Declaraci�n de las variables 
	int n1, n2;
	
       	//Entrada datos
	cout<< "Digite el primer numero: ";
	cin>>n1;            //Interacci�n con el usuario
	cout<<"\nDigite el segundo numero: ";
	cin>>n2;            //Interacci�n con el usuario
	
	 //Paso final, salidad de los datos anteriormente asignados
	 
	cout<<"\nLa suma de ambos numero da como resultado: "<<n1+n2;
	
	cout<<"\nLa resta de ambos numero da como resultado: "<<n1-n2;
	
	cout<<"\nLa multiplicacion de ambos numero da como resultado: "<<n1*n2;
	
	cout<<"\nLa division de ambos numero da como resultado: "<<n1/n2;
	
	
	return 0;
}
