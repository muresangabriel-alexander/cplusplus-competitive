#include <iostream>

using namespace std;

int main()
{
    int iDays, iMonths, iYears, iDay;

    cin>>iDays;

    iYears = iDays/365;
    iMonths = (iDays - iYears*365)/30;
    iDay = iDays - iYears*365 - iMonths*30;
    cout<< iYears<<" ano(s)"<<'\n';
    cout<< iMonths<<" mes(es)"<<'\n';
    cout<< iDay<<" dia(s)"<<'\n';

    return 0;
}
