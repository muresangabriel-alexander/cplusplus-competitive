#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a, b, c, fAria, fPerimeter;
    cin>>a>>b>>c;

    if(a+b>c && a+c>b && b+c>a){
        fPerimeter = a + b + c ;
        cout<<"Perimetro = "<<fixed<<setprecision(1)<<fPerimeter<<'\n';
    }
    else{
        fAria = ((a+b)*c)/2;
        cout<<"Area = "<<fixed<<setprecision(1)<<fAria<<'\n';
    }
    return 0;
}
