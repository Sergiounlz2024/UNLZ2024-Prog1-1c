 #include <iostream>
 #include <string> 
 
 using namespace std;
 
 int main(){
//Escribir un programa que cuente hacia atr�s desde un n�imero dado hasta 0.

int inicio = 0; //Declaraci�n de variables 
int contador = 1; //Declaraci�n de variables

cout<<"Ingrese un numero inicial que disminuira hasta llegar a 0"<<endl; //�Texto donde solicito ingreso por teclado
cin>>inicio; //Ingreso por teclado

do { //Realizo un doWhile para que siempre me realice una vez la acci�n. Si ese n�mero contin�a siendo mayor o igual a 0
//seguir� repiti�ndose hasta su cometido que es que sea menor a 0.
	cout<<"Posicion "<<contador<<": "<<inicio<<endl; //Muestro la posici�n de cada valor
	inicio--; //Resto el valor inicial para que vaya disminuyendo hasta 0
	contador++; //Aumento el contador para mostrar la posici�n
}while(inicio>0); 	//Mientras que el valor "inicio" sea > a 0, continuar� funcionando el ciclo.
 }
