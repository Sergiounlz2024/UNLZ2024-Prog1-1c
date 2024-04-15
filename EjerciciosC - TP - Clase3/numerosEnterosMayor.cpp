#include <iostream> 
#include <string>

using namespace std;


int main() { 
/*
Desarrollar un programa que solicite al usuario ingresar tres números enteros y que
imprima el mayor de los tres.
*/
int num1 = 0;
int num2 = 0;
int num3 = 0;

cout << "Ingrese un numero"<<endl	;
cout <<"Primer valor: "<<endl,cin>>num1;
cout <<"Segundo valor: "<<endl,cin>>num2;
cout <<"Tercer valor: "<<endl,cin>>num3;

if(num1==num2 && num1==num3 && num3==num2){
	cout << "Todos los valores son iguales";
}else if(num1>num2 && num1>num3){
	cout << "El número mayor es el número 1: "<<num1;
}else if(num1==num2 && num1>num3){
	cout << "Existen dos números con el mismo valor."<<endl;
	cout << "El primer valor y el segundo. Orden de mayor a menor"<<endl;
	cout <<"1º: "<<num1<<endl;
	cout <<"2º: "<<num2<<endl;
	cout <<"3º: "<<num3<<endl;
}else if(num1>num2 && num1==num3){
	cout << "Existen dos números con el mismo valor."<<endl;
	cout << "El primer valor y el tercero. Orden de mayor a menor"<<endl;
	cout <<"1º: "<<num1<<endl;
	cout <<"2º: "<<num3<<endl;
	cout <<"3º: "<<num2<<endl;
}
else if(num2>num1 && num2>num3){
	cout << "El número mayor es el número 2: "<<num2;
}else if(num2>num1 && num2==num3){
	cout << "Existen dos números con el mismo valor."<<endl;
	cout << "El segundo valor y el tercero. Orden de mayor a menor"<<endl;
	cout <<"1º: "<<num2<<endl;
	cout <<"2º: "<<num3<<endl;
	cout <<"3º: "<<num1<<endl;
}
else {
	cout <<"El número mayor es el número 3: "<<num3;
}

}
