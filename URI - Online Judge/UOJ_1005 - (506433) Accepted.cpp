#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a, b, M;
    cin>> a;
    cin>> b;
    M= ((a*3.5)+(b*7.5))/11;
    cout << fixed <<setprecision(5)<<"MEDIA = "<< M << endl;

    return 0;
}
