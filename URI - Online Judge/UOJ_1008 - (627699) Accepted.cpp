#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number ,payment;
    double t, salary;
    cin>>number;
    cin>>payment;
    cin>>t;

    salary = payment * t;

    cout<<"NUMBER = "<<number<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<salary<<endl;

    return 0;
}
