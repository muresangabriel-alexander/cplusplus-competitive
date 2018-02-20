#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;
ifstream cin("ariatriunghi.in");
ofstream cout("ariatriunghi.out");

int main()
{
    double x1, x2, y1, y2, z1, z2;
    cin>>x1>>x2>>y1>>y2>>z1>>z2;

    cout<<fixed<<setprecision(1)<<(double)abs((x1*(y2-z2) + y1*(z2-x2) + z1*(x2-y2))/2);
    return 0;
}
