#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float fIncome, fTaxes1, fTaxes2, fTaxes3, fTaxes4 , fTaxes;
    cin>>fIncome;

    if(fIncome<=2000.00){
        cout<<"Isento"<<'\n';
    }
    else{
        if(fIncome>2000.00 && fIncome<=3000.00){
            fTaxes1 = ((fIncome-2000) * 8) / 100;
            cout<<"R$ "<<fixed<<setprecision(2)<<fTaxes1<<'\n';
        }
        else{
            if(fIncome>3000.00 && fIncome<=4500){
                fTaxes1 = (1000 * 8) / 100;
                fTaxes2 = ((fIncome-3000) * 18) / 100;
                fTaxes = fTaxes1 + fTaxes2;
                cout<<"R$ "<<fixed<<setprecision(2)<<fTaxes<<'\n';
            }
            else{
                if(fIncome>4500){
                fTaxes1 = (1000 *8)/100;
                fTaxes2 = (1500 *18)/100;
                fTaxes3 = ((fIncome-4500) *28)/100;
                fTaxes = fTaxes1 + fTaxes2 + fTaxes3;
                    cout<<"R$ "<<fixed<<setprecision(2)<<fTaxes<<'\n';
                }
            }
        }
    }
    return 0;
}
