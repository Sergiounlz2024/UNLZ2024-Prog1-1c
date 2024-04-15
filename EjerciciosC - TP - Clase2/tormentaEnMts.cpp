#include <iostream>
#include <string>

using namespace std;

int main(){
	/*Calcular la distancia a la que se encuentra una tormenta:
Elabore un algoritmo en C++ para calcular la distancia en metros a la que se
encuentra una tormenta cronometrando los segundos transcurridos entre el
relámpago y el trueno. Se debe tomar como constante la velocidad del sonido en
343 metros por segundo.*/



const int velocidadSonido = 343;
float tiempoTranscurrido = 0;
float distanciaEnMetros = 0;


cout << "¡Bienvenidos! Hoy calcularemos la distancia en metros de una tormenta"<<endl;
cout << "Para ello, ingresa los segundos que transcurren desde que ves un relampago, "<< endl << " hasta que escuchas el trueno"<<endl;
cin >> tiempoTranscurrido;

distanciaEnMetros = velocidadSonido * tiempoTranscurrido;

cout << "Al haber transcurrido " << tiempoTranscurrido << " segundos, quiere decir que la tormenta " <<endl <<"se encuentra a " << distanciaEnMetros << "mts.";










}
