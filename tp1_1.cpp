#include <iostream>
using namespace std;

int main() {
    int nota1=0;
    int nota2=0;
    int nota3=0,prom;
    
    cout<<"ingrese su primera nota: ";
    cin>>nota1;
    cout<<"\n ingrese su segunda nota: ";
    cin>>nota2;
    cout<<"\n ingrese su tercera nota: ";
    cin>>nota3;
    prom=(nota1+nota2+nota3)/3;
    if(prom>=7){
        cout<<"PROMOCIONADO";
    }
    if(prom<=4){
        cout<<"reprobado";
    }
    if(prom>4 && prom<7){
         cout<<"regular";
    }



}
