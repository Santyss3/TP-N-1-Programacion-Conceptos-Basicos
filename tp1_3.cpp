#include <iostream>
using namespace std;
int cifras(int num){
    if(num <10){
        return 1;
    }
    if(num>=10 && num<100){
        return 2;
    }
    if(num>=100 && num<1000){
        return 3;
    }
    if(num>=1000){
        return 4;
    }
}
int main(){
    int num=0;
    cout<<"Escrba un numero yo te dire las cifras, si de 4 o mayor dira un mensaje de ERROR FATAL: ";
    cin>>num;
    int verficar=cifras(num);
    if(verficar==1){
        cout<<"tiene 1 cifra";
    }
    if(verficar==2){
        cout<<"tiene 2 cifras";
    }
    if(verficar==3){
        cout<<"tiene 3 cifras";
    }
    if(verficar==4){
        cout<<"ERROR FATAL";
    }

}