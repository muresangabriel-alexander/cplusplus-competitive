#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    double dSalary, dValueSold, dTotal;
    string sName;
    cin>>sName;
    cin>>dSalary;
    cin>>dValueSold;

    dTotal = dSalary + ((dValueSold * 15)/100);
    cout <<"TOTAL = R$ "<< fixed << setprecision(2) << dTotal << '\n';

    return 0;
}
