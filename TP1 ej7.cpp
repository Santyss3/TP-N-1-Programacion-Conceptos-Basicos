#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int funcion();

int main(){
	
	
	funcion();
	
	
}

int funcion(){
	
	srand(time(0));
	int plata = rand() % 10000 + 1;
	
	int retirar, opciones;
	
	cout<<"BIENVENIDO A BARCELONA BANK"<<endl;
	while(true){
	
	if(plata == 1){
	
	cout<<"saldo actual: $"<<plata<<" Pesos"<<endl;
	
	}
	
	else{
	
	
	cout<<"saldo actual: $"<<plata<<" Pesos"<<endl;
	
	}
	
	cout<<"que operacion desea realizar?"<<endl;
	cout<<"1. retirar dinero"<<endl;
	cout<<"2. ingresar dinero"<<endl;
	cout<<"3. pedir prestamo"<<endl;
	cout<<"4. salir"<<endl;
	cin>>opciones;
	
	switch(opciones){
		
		case 1:
		cout<<"cuanto dinero desea retirar?: ";cin>>retirar;
		
		if(retirar > plata){
		
		if(retirar-plata == 1) {
			
		cout<<"necesitaria $"<<retirar-plata<<" Pesos mas para retirar esa cantidad"<<endl;
			
		}
		
		
		
		else {
			
		cout<<"necesitaria $"<<retirar-plata<<" Pesos mas para retirar esa cantidad"<<endl;
			
		}
		
		}
		
		
		
		else {
			
		cout<<"el retiro fue exitoso!, su saldo sera actualizado"<<endl;
		plata=plata-retirar;
		
		}
		break;
		
		case 2:
		cout<<"cuantos pesos desea ingresar?:";cin>>retirar;
		cout<<"perfecto!, se agregaran $"<<retirar<<" a su cuenta"<<endl;
		plata=plata+retirar;
		break;
		
		case 3:
		cout<<"cuanto dinero desea pedir prestado?: "; cin>>retirar;
		
		if(retirar == 1){
		
		cout<<"OK  $"<<retirar<<"  Pesos Ya estan en su cuenta"<<endl;	
			
		}
		
		else{
		
		cout<<"le daremos $"<<retirar<<"  Pesos"<<endl;
		
		}
		break;
		
		case 4:
		cout<<"CHAUUUUUUUU"<<endl;
		return 0;
		break;
		
		
		
	}
	
	system("pause");
	system("cls");

}
	
	
	
}