#include <iostream>
#include <string>

using namespace std;

int main(){
	/*Desarrollar un programa que simule una calculadora simple. El usuario debe ingresar
dos números y luego seleccionar una operación (suma, resta, multiplicación o división).
El programa debe realizar la operación seleccionada e imprimir el resultado.*/

	int numero1 = 0;
	int numero2 = 0;
	int resultado = 0;
	int opcionMenu = 0;
	
	cout<<"¡Bienvenidos a la calculadora virtual!"<<endl;
	cout<<"Menu: "<<endl;
	cout<<"1-Suma"<<endl;
	cout<<"2-Resta"<<endl;
	cout<<"3-Multiplicacion"<<endl;
	cout<<"4-Division"<<endl;
	cout<<"5-Salir"<<endl;

	cin>>opcionMenu;
	while(opcionMenu<1 || opcionMenu>5){
			cout<<"Ingrese un valor entre las opciones del menu, por favor."<<endl;
			cout<<"Menú: "<<endl;
			cout<<"1-Suma"<<endl;
			cout<<"2-Resta"<<endl;
			cout<<"3-Multiplicacion"<<endl;
			cout<<"4-Division"<<endl;
			cout<<"5-Salir"<<endl;
		
			cin>>opcionMenu;
	}	
	if(opcionMenu == 1){
		cout<<"Ingrese los dos numeros que se quieren sumar"<<endl;
		cout<<"Primer valor: "<<endl;
		cin>>numero1;
		cout<<"Segundo valor: "<<endl;
		cin>>numero2;
		resultado = numero1+numero2;
		cout<<numero1<<"+"<<numero2<<"="<<resultado;
	}else if(opcionMenu == 2){
		cout<<"Ingrese los dos numeros que se quieren restar"<<endl;
		cout<<"Primer valor: "<<endl;
		cin>>numero1;
		cout<<"Segundo valor: "<<endl;
		cin>>numero2;
		resultado = numero1-numero2;
		cout<<numero1<<"-"<<numero2<<"="<<resultado;
	}else if(opcionMenu == 3){
		cout<<"Ingrese los dos numeros que se quieren multiplicar"<<endl;
		cout<<"Primer valor: "<<endl;
		cin>>numero1;
		cout<<"Segundo valor: "<<endl;
		cin>>numero2;
		resultado = numero1*numero2;
		cout<<numero1<<"x"<<numero2<<"="<<resultado;
	}else if(opcionMenu == 4){
		cout<<"Ingrese los dos numeros que se quieren dividir"<<endl;
		cout<<"Primer valor: "<<endl;
		cin>>numero1;
		cout<<"Segundo valor: "<<endl;
		cin>>numero2;
		resultado = numero1/numero2;
		cout<<numero1<<"/"<<numero2<<"="<<resultado;
	}else if(opcionMenu == 5){
		cout<<"El programa ha finalizado."<<endl;
	}
	

	
	
	
	
}
