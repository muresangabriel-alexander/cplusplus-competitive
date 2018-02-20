#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int dim=__gcd(n,m);
    int nr=(n*m)/(dim*dim);
    cout<<nr<<' '<<dim;
    return 0;
}
