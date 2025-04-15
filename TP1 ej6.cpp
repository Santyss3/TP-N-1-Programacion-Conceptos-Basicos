#include<iostream>
using namespace std;

int funcion();

int main(){

funcion();
	
}

int funcion(){
	
	
	float entradas;
	float descuento;
	
	cout<<"cuantas entradas para el Nuevo Gasometro comprara?"<<endl;
	cout<<"entrada: $50 pesos"<<endl;
	cout<<"cantidad de entradas: ";cin>>entradas;
	
	if(entradas == 1){
	
	entradas=entradas*50;
	cout<<"gracias por su compra!, son $"<<entradas<<" Pesos"<<endl;	
		
	}
	
	else if(entradas == 2){
	
	entradas=entradas*50;
	descuento=entradas*.90;
	cout<<"gracias por su compra!, son $"<<descuento<<" Pesos"<<endl;	
		
	}
	
	else if(entradas == 3){
	
	entradas=entradas*50;
	descuento=entradas*.85;
	cout<<"gracias por su compra!, son $"<<descuento<<" Pesos"<<endl;	
		
	}
	
	else if(entradas == 4){
	
	entradas=entradas*50;
	descuento=entradas*.80;
	cout<<"gracias por su compra!, son $"<<descuento<<" pesos"<<endl;		
		
	}
	
	else if(entradas > 4){
		
	entradas=entradas*50;
	cout<<"el descuento ya no aplica, debera pagar el precio total $"<<entradas<<" Pesos"<<endl;
	}
	
		
	
}