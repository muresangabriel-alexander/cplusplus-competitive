#include <iostream>

using namespace std;

int main()
{
    int iFuel=0, iGas=0, iDiesel=0, iAlcool=0;
while(iFuel!=4){
    cin>>iFuel;
    switch(iFuel){
    case 1: iAlcool++;
    break;
    case 2: iGas++;
    break;
    case 3: iDiesel ++;
    break;
    }
}
cout<<"MUITO OBRIGADO"<<'\n';
cout<<"Alcool: "<<iAlcool<<'\n';
cout<<"Gasolina: "<<iGas<<'\n';
cout<<"Diesel: "<<iDiesel<<'\n';
    return 0;
}
