#include <iostream>
using namespace std;

int main(){
	int numero;
	
	cout<<"------------------Bienvenido-------------"<<endl;
	
	do{
	cout<<"Ingrese un numero natural del 1 al 5 para mostrar una vocal (0 para salir): ";
	cin>>numero;
	
	switch (numero){
		case 1:
			cout<<"La vocal correspondiente del numero "<<numero<<" es A"<<endl<<endl;
			break;
		case 2:
			cout<<"La vocal correspondiente del numero "<<numero<<" es E"<<endl<<endl;
			break;
		case 3:
			cout<<"La vocal correspondiente del numero "<<numero<<" es I"<<endl<<endl;
			break;
		case 4:
			cout<<"La vocal correspondiente del numero "<<numero<<" es O"<<endl<<endl;
			break;
		case 5:
			cout<<"La vocal correspondiente del numero "<<numero<<" es U"<<endl<<endl;
			break;
		case 0:
			cout<<"Saliendo del programa...";
			break;
		default:
			cout<<"El numero que ingreso no es una opcion valida, intente de nuevo"<<endl<<endl;
			break;
	}
	}while(numero!=0);
	
	return 0;
}