#include <iostream>
using namespace std;
int porcen(int preguntas,int correctas,float porcentaje){
    if(porcentaje<50){
        cout<<"Fuera de nivel";
    }
    if(porcentaje>=50 && porcentaje<75){
        cout<<"Nivel regular";
    }
    if(porcentaje>75 && porcentaje<90){
        cout<<"Nivel Medio";
    }
    if(porcentaje>90){
        cout<<"Nivel Maximo";
    }
}
int main(){
    int preguntas=0,correctas=0;
    cout<<"escriba cuantas preguntas eran: ";
    cin>>preguntas;
    cout<<"escriba las respuestas correctas: ";
    cin>>correctas;
    float porcentaje=correctas/preguntas*100;
    porcen(preguntas,correctas,porcentaje);
    
}