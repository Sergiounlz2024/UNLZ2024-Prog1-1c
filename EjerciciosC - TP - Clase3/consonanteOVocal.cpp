#include <iostream>
#include <string>
#include <cctype> // Librería necesaria para las funciones isdigit() y isalpha()
#include <cstdlib> // Para la función system()

using namespace std;

int main(){
/*Desarrollar un programa que solicite al usuario ingresar un carácter y que determine si
es una vocal o una consonante.
*/

char letra;
cout<<"Ingrese un caracter para verificar si es vocal o consonante"<<endl;

cin>>letra;

	while (isdigit(letra))
	{
		cout<< "Debe ingresar una letra, no un numero. Vuelva a intentarlo "<<endl;
		cin>>letra;
		system("cls");
	}
	if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || 
	letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U')
	{
		cout<< "La letra elegida es una vocal: "<<letra;
	}else
	{
		cout<< "Le letra elegida es consonante: "<<letra;
	}

}
