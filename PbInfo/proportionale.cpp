#include <iostream>
#include <algorithm>
using namespace std;

double a[1004], b[1004];
int main()
{
    int  m , n, pointy, x;

    cin>>n;for(int i=1; i<=n; ++i)cin>>a[i];
    for(int i=1; i<=n; ++i)cin>>b[i];
    sort(a+1, a+n+1);
    sort(b+1, b+n+1);

    double rap = a[1]/b[1];
    for(int i=1; i<=n; ++i){
        if(a[i]/b[i]!=rap){cout<<"NU"; return 0;}
    }

    cout<<"DA"; return 0;
}
