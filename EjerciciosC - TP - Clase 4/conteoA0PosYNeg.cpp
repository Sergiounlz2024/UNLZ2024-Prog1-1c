#include <iostream>
#include <string>

using namespace std;

int main() {

int inicio = 0;
int contador = 1;

cout<<"Ingrese un valor inicial"<<endl;
cin>>inicio;
while(inicio>0){
cout<<"Valor inicial "<<contador<<": "<<inicio<<endl;
inicio--;
contador++;
}while (inicio<0){
    cout<<"Valor inicial "<<contador<<": "<<inicio<<endl;
    inicio++;
    contador++;
}



}