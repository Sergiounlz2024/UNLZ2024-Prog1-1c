#include <iostream>
#include <string>

using namespace std;


int main(){
/*Convertir Pesos Argentinos a Reales Brasileros
Elabore un algoritmo en C++ para convertir pesos argentinos a dólares
estadounidenses. La cantidad de pesos y la cotización deberán ser solicitadas al
usuario*/

int monto = 0;
int monedaInicio = 0;
int monedaCambio = 0;
int cotizacion = 0;
int valorFinal = 0;

cout << "Bienvenido a la casa de cambio Tojo" << endl;//Abrimos el programa con un mensaje
cout << "¿Que moneda quiere cambiar?" << endl; //Moneda que tenemos en nuestro poder

cout << "---------Menu--------" <<endl; //Creamos menu de opciones
cout << "1- Pesos argentinos"<<endl; //Opcion 1
cout << "2- Dolar"<<endl; // Opcion 2
cout << "3- Real"<<endl; // Opcion 3
cout << "4- Euro" <<endl; // Opcion 4
cout << "5- SALIR" <<endl; // Opcion 5 (SALIR DEL PROGRAMA)
cout << "---------------------"<<endl;
cin >> monedaInicio; //Ingreso de la moneda que ya tiene el usuario.
if(monedaInicio == 5){
	cout << "GRACIAS POR VISITARNOS. Te esperamos pronto" << endl;
return 0;
}else{
if(monedaInicio == 1){ //Según la selección de la moneda que tenga, son las opciones que luego le aparecerán para cambiar.
cout << "¿A que moneda quiere cambiar?" << endl; 
cout << "---------Menu--------" <<endl; //Creamos menu de opciones
cout << "1- Dolar"<<endl; // Opcion 1
cout << "2- Real"<<endl; // Opcion 2
cout << "3- Euro" <<endl; // Opcion 3
cout << "---------------------" <<endl;
}else if(monedaInicio == 2){
cout << "¿A que moneda quiere cambiar?" << endl; 
cout << "---------Menu--------" <<endl; //Creamos menu de opciones
cout << "1- Pesos Argentinos"<<endl; // Opcion 1
cout << "2- Real"<<endl; // Opcion 2
cout << "3- Euro" <<endl; // Opcion 3
cout << "---------------------"<<endl;
}else if(monedaInicio == 3){
cout << "¿A que moneda quiere cambiar?" << endl; 
cout << "---------Menu--------" <<endl; //Creamos menu de opciones
cout << "1- Pesos Argentinos"<<endl; // Opcion 1
cout << "2- Dolar"<<endl; // Opcion 2
cout << "3- Euro" <<endl; // Opcion 3
cout << "---------------------"<<endl;
}else if(monedaInicio == 4){
cout << "¿A que moneda quiere cambiar?" << endl; 
cout << "---------Menu--------" <<endl; //Creamos menu de opciones
cout << "1- Pesos Argentinos"<<endl; // Opcion 1
cout << "2- Real"<<endl; // Opcion 2
cout << "3- Dolar" <<endl; // Opcion 3
cout << "---------------------"<<endl;
}

cin >> monedaCambio; //Ingreso del número de moneda que quiere obtener.

if(monedaInicio == 1 && monedaCambio == 1){ /*Condiciones para verificar y corroborar cada valor en el menú. Según la selección de la primera y segunda etapa
 es el valor que irá mostrándose.*/
	cout << "Ingrese la cantidad de dinero que quiere cambiar a pesos argentinos" <<endl;
	cin >> monto;
	
	cout << "Ingrese la cotizacion del dolar"<<endl;
	cin >> cotizacion;
	
	valorFinal = monto / cotizacion;
	
	cout << "Usted cambio: $" << monto << endl;
	cout << "Cotizacion actual: $" << cotizacion <<endl;
	cout << "Valor obtenido en dolares: USD " <<valorFinal<<endl;
	return 0;
}else if(monedaInicio == 1 && monedaCambio == 2){
		cout << "Ingrese la cantidad de dinero que quiere cambiar a pesos argentinos" <<endl;
	cin >> monto;
	
	cout << "Ingrese la cotizacion del real"<<endl;
	cin >> cotizacion;
	
	valorFinal = monto / cotizacion;
	
	cout << "Usted cambio: $" << monto << endl;
	cout << "Cotizacion actual: $" << cotizacion <<endl;
	cout << "Valor obtenido en dolares: BRL " <<valorFinal<<endl;
	return 0;
}else if(monedaInicio == 1 && monedaCambio == 3){
		cout << "Ingrese la cantidad de dinero que quiere cambiar a pesos argentinos" <<endl;
	cin >> monto;
	
	cout << "Ingrese la cotizacion del euro"<<endl;
	cin >> cotizacion;
	
	valorFinal = monto / cotizacion;
	
	cout << "Usted cambio: $" << monto << endl;
	cout << "Cotizacion actual: $" << cotizacion <<endl;
	cout << "Valor obtenido en dolares: E " <<valorFinal<<endl;
	return 0;
}else if(monedaInicio == 2 && monedaCambio == 1){
		cout << "Ingrese la cantidad de dinero que quiere cambiar a dolar" <<endl;
	cin >> monto;
	
	cout << "Ingrese la cotizacion del pesos argentinos"<<endl;
	cin >> cotizacion;
	
	valorFinal = monto / cotizacion;
	
	cout << "Usted cambio: USD " << monto << endl;
	cout << "Cotizacion actual: USD " << cotizacion <<endl;
	cout << "Valor obtenido en dolares: $ " <<valorFinal<<endl;
	return 0;
}else if(monedaInicio == 2 && monedaCambio == 2){
		cout << "Ingrese la cantidad de dinero que quiere cambiar a dolar" <<endl;
	cin >> monto;
	
	cout << "Ingrese la cotizacion del real"<<endl;
	cin >> cotizacion;
	
	valorFinal = monto / cotizacion;
	
	cout << "Usted cambio: USD " << monto << endl;
	cout << "Cotizacion actual: USD " << cotizacion <<endl;
	cout << "Valor obtenido en dolares: BRL " <<valorFinal<<endl;
	return 0;
}else if(monedaInicio == 2 && monedaCambio == 3){
		cout << "Ingrese la cantidad de dinero que quiere cambiar a dolar" <<endl;
	cin >> monto;
	
	cout << "Ingrese la cotizacion del euro"<<endl;
	cin >> cotizacion;
	
	valorFinal = monto / cotizacion;
	
	cout << "Usted cambio: USD " << monto << endl;
	cout << "Cotizacion actual: USD " << cotizacion <<endl;
	cout << "Valor obtenido en dolares: E " <<valorFinal<<endl;
	return 0;
}else if(monedaInicio == 3 && monedaCambio == 1){
		cout << "Ingrese la cantidad de dinero que quiere cambiar a real" <<endl;
	cin >> monto;
	
	cout << "Ingrese la cotizacion del pesos argentinos"<<endl;
	cin >> cotizacion;
	
	valorFinal = monto / cotizacion;
	
	cout << "Usted cambio: BRL " << monto << endl;
	cout << "Cotizacion actual: BRL " << cotizacion <<endl;
	cout << "Valor obtenido en dolares: $ " <<valorFinal<<endl;
	return 0;
}else if(monedaInicio == 3 && monedaCambio == 2){
		cout << "Ingrese la cantidad de dinero que quiere cambiar a real" <<endl;
	cin >> monto;
	
	cout << "Ingrese la cotizacion del dolar"<<endl;
	cin >> cotizacion;
	
	valorFinal = monto / cotizacion;
	
	cout << "Usted cambio: BRL " << monto << endl;
	cout << "Cotizacion actual: BRL " << cotizacion <<endl;
	cout << "Valor obtenido en dolares: USD " <<valorFinal<<endl;
	return 0;
}else if(monedaInicio == 3 && monedaCambio == 3){
		cout << "Ingrese la cantidad de dinero que quiere cambiar a real" <<endl;
	cin >> monto;
	
	cout << "Ingrese la cotizacion del euro"<<endl;
	cin >> cotizacion;
	
	valorFinal = monto / cotizacion;
	
	cout << "Usted cambio: BRL " << monto << endl;
	cout << "Cotizacion actual: BRL " << cotizacion <<endl;
	cout << "Valor obtenido en dolares: E " <<valorFinal<<endl;
	return 0;
}else if(monedaInicio == 4 && monedaCambio == 1){
		cout << "Ingrese la cantidad de dinero que quiere cambiar a euro" <<endl;
	cin >> monto;
	
	cout << "Ingrese la cotizacion del pesos argentinos"<<endl;
	cin >> cotizacion;
	
	valorFinal = monto / cotizacion;
	
	cout << "Usted cambio: E " << monto << endl;
	cout << "Cotizacion actual: E " << cotizacion <<endl;
	cout << "Valor obtenido en dolares: $ " <<valorFinal<<endl;
	return 0;
}else if(monedaInicio == 4 && monedaCambio == 2){
		cout << "Ingrese la cantidad de dinero que quiere cambiar a euro" <<endl;
	cin >> monto;
	
	cout << "Ingrese la cotizacion del real"<<endl;
	cin >> cotizacion;
	
	valorFinal = monto / cotizacion;
	
	cout << "Usted cambio: E " << monto << endl;
	cout << "Cotizacion actual: E " << cotizacion <<endl;
	cout << "Valor obtenido en dolares: BRL	 " <<valorFinal<<endl;
	return 0;
}else if(monedaInicio == 4 && monedaCambio == 3){
		cout << "Ingrese la cantidad de dinero que quiere cambiar a euro" <<endl;
	cin >> monto;
	
	cout << "Ingrese la cotizacion del dolar"<<endl;
	cin >> cotizacion;
	
	valorFinal = monto / cotizacion;
	
	cout << "Usted cambio: E " << monto << endl;
	cout << "Cotizacion actual: E " << cotizacion <<endl;
	cout << "Valor obtenido en dolares: USD " <<valorFinal<<endl;
	return 0;
}
}
}
