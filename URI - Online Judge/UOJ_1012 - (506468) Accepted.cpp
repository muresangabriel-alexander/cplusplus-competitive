#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a, b, c, aT, aC, aTR, aQ, aR, pi = 3.14159;
    cin>>a;
    cin>>b;
    cin>>c;
    aT = (a*c)/2;
    aC = c*c * pi;
    aTR = ((a+b)*c)/2;
    aQ = b*b;
    aR = a*b;
    cout << fixed << setprecision(3)<<"TRIANGULO: "<< aT<<endl;
    cout << fixed << setprecision(3)<<"CIRCULO: "<< aC<<endl;
    cout << fixed << setprecision(3)<<"TRAPEZIO: "<< aTR<<endl;
    cout << fixed << setprecision(3)<<"QUADRADO: "<< aQ<<endl;
    cout << fixed << setprecision(3)<<"RETANGULO: "<< aR<<endl;



    return 0;
}
