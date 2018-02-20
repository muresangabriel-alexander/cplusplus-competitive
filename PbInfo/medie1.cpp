#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main()
{
    double a, b, c;
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(2)<< floor((a+b+c)/3*100)/100;
    return 0;
}