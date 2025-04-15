#include <iostream>
using namespace std;
bool verificar(int nota1,int nota2,int nota3){
    if(nota1<10 && nota2<10 && nota3<10){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    
    int nota1=0;
    int nota2=0;
    int nota3=0;
    cout<<"ingrese su primer numero: ";
    cin>>nota1;
    cout<<"\n ingrese su segundo numero: ";
    cin>>nota2;
    cout<<"\n ingrese su tercer numero: ";
    cin>>nota3;
    bool total = verificar(nota1, nota2, nota3);
    if(total==true){
        cout<<"todos los numeros son menores a 10";
    }
    if(total==false){
        cout<<"algun numero no es menor a 10";
    }
    return 0;
}