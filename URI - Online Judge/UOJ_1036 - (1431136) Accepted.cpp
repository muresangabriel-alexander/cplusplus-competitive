#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main()
{
    float a , b, c, x1 , x2, delta;
 
     cin>>a>>b>>c;
     delta= b*b - 4*a*c;
if(a!=0 && delta>0){
     x1 = ((-b + sqrt(delta))/2)/a;
     x2 = ((-b - sqrt(delta))/2)/a;
     cout<<"R1 = "<<fixed<<setprecision(5)<<x1<<'\n';
     cout<<"R2 = "<<fixed<<setprecision(5)<<x2<<'\n';
 }

else cout<<"Impossivel calcular"<<'\n';

    return 0;
}