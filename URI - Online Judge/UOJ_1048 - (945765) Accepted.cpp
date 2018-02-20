#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float dSalary, dIncrease, dTotal;
    cin>>dSalary;

    if(dSalary<=400){
        dIncrease = (15 * dSalary)/100;
        dTotal = dSalary + dIncrease;
            cout<<"Novo salario: "<<fixed<<setprecision(2)<<dTotal<<'\n';
            cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<dIncrease<<'\n';
            cout<<"Em percentual: 15 %"<<'\n';
    }
    else{
        if(dSalary>400 && dSalary<=800){
            dIncrease = (dSalary * 12)/100;
            dTotal = dSalary + dIncrease;
            cout<<"Novo salario: "<<fixed<<setprecision(2)<<dTotal<<'\n';
            cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<dIncrease<<'\n';
            cout<<"Em percentual: 12 %"<<'\n';
        }
        else{
            if(dSalary>800 && dSalary<=1200){
            dIncrease = (dSalary * 10)/100;
            dTotal = dSalary + dIncrease;
            cout<<"Novo salario: "<<fixed<<setprecision(2)<<dTotal<<'\n';
            cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<dIncrease<<'\n';
            cout<<"Em percentual: 10 %"<<'\n';
            }
            else{
            if(dSalary>1200 && dSalary<=2000){
            dIncrease = (dSalary * 7)/100;
            dTotal = dSalary + dIncrease;
            cout<<"Novo salario: "<<fixed<<setprecision(2)<<dTotal<<'\n';
            cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<dIncrease<<'\n';
            cout<<"Em percentual: 7 %"<<'\n';
            }
            else{
            if(dSalary>2000){
            dIncrease = (dSalary * 4)/100;
            dTotal = dSalary + dIncrease;
            cout<<"Novo salario: "<<fixed<<setprecision(2)<<dTotal<<'\n';
            cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<dIncrease<<'\n';
            cout<<"Em percentual: 4 %"<<'\n';
            }
            }
            }
        }
    }
    return 0;
}
