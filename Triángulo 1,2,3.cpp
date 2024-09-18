#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void triangulo1() {
 int numero = 0;
 cout << "Ingrese un numero positivo: ";
 cin >> numero;
 for (int j=numero; j>=1; j--) {
 
 for (int espacio=1; espacio<= numero-j; espacio++) {
 cout << " ";
 }
 for (int l = 1; l <= j; l++) {
 cout << "x";
 }
 cout << endl;
 }
}


void triangulo2() {
 int numero = 0;
 cout << "Ingrese un numero positivo: ";
 cin >> numero;
 for (int j=1; j<=numero; j++) {

 
 for (int espacio=1; espacio<= numero-j; espacio++) {
 cout << " ";
 }
 for (int l=1; l<=j; l++) {
 cout << "x";
 }
 cout << endl;
 }
}


void triangulo3(){
int numero=0;
cout<<"Ingrese un numero positivo impar: ";
cin>>numero;
if (numero%2 == 0) cout << "El numero "<<numero<<" no es impar. " <<endl;
else 
for(int i=1; i<=numero; i+=2){ 

for(int j=0; j<(numero-i)/2; j++){
cout << " ";
}
for(int j=0; j<i; j++ ){
cout<< "*";
}
cout<<endl; 
}
}

int main(){
	
	triangulo1();
	triangulo2();
	triangulo3();
	
	return 0;
}
