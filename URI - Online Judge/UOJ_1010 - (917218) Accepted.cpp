#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int iProduct , iNumber;
    float fPrice, fTotal;

    int iProduct2 , iNumber2;
    float fPrice2;
    cin>> iProduct  >> iNumber>> fPrice;
    cin>> iProduct2 >> iNumber2 >> fPrice2;

    fTotal = iNumber*fPrice + iNumber2*fPrice2;

    cout<<"VALOR A PAGAR: R$ "<< fixed<< setprecision(2)<<fTotal<<'\n';
    return 0;
}
