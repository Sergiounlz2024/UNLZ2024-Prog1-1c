#include <iostream>
#include <string>

using namespace std;

int main(){
	/*. Desarrollar un programa que solicite al usuario ingresar un número del 1 al 7 y que
imprima el día de la semana correspondiente. (Por ejemplo, si el usuario ingresa 1,
imprimir "Lunes"; si ingresa 2, imprimir "Martes", etc.)
*/

int valor1 = 0;

cout<< "Elija un día del 1 al 7"<<endl;
cout<< "1- Lunes"<<endl;
cout<< "2- Martes"<<endl;
cout<< "3- Miercoles"<<endl;
cout<< "4- Jueves"<<endl;
cout<< "5- Viernes"<<endl;
cout<< "6- Sabado"<<endl;
cout<< "7- Domingo"<<endl;
cout<< "8- Salir del programa"<<endl;
cin>>valor1;

switch (valor1) {
	case 1:
		cout<<"Has seleccionado el dia Lunes"<<endl;
	break;
	case 2:
		cout<<"Has seleccionado el dia Martes"<<endl;
	break;
	case 3:
		cout<<"Has seleccionado el dia Miercoles"<<endl;
	break;
	case 4:
		cout<<"Has seleccionado el dia Jueves"<<endl;
	break;
	case 5:
		cout<<"Has seleccionado el dia Viernes"<<endl;
	break;
	case 6:
		cout<<"Has seleccionado el dia Sabado"<<endl;
	break;
	case 7:
		cout<<"Has seleccionado el dia Domingo"<<endl;
	break;
	case 8:
		cout<<"El programa ha sido finalizado."<<endl;
		return 0;
	default:
		cout << "La opcion ingresada es invalida" << endl;
		return 0;	
		break;
}

	
}
