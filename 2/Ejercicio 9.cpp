//hola

#include<iostream>
#include<math.h>

using namespace std;

int main() {
	
	float x,y,resultado = 0;
	
	cout<<"Digite el valor de x: ";cin>>x;
	cout<<"Digite el valor de y: ";cin>>y;
	
	resultado = (sqrt(x))/(pow(y,2)-1);
	
	cout.precision(3);
	cout<<"El resultado es: "<<resultado;
	
	
	return 0;
}
