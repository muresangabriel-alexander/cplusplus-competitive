#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a, b, c, M;
    cin>> a;
    cin>> b;
    cin>> c;
    M= ((a*2)+(b*3)+(c*5))/10;
    cout << fixed <<setprecision(1)<<"MEDIA = "<< M << endl;

    return 0;
}
