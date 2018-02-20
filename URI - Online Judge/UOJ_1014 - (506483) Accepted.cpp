#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int X;
    double Y;
    double C;
    cin>>X;
    cin>>Y;
    C = X/Y;
    cout << fixed << setprecision(3) << C << " km/l"<< endl;


    return 0;
}
