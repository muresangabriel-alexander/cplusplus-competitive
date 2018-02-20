#include <iostream>
#include <cmath>
using namespace std;
//int a[15];

int pwer(int baza, int esp){
int rez=1;
for(int i=1; i<=esp; ++i)rez*=baza;
return rez;
}

int main()
{
    int n, b, rez=0, x;
    cin>>b>>n;
    for(int i=1; i<=n; ++i){
        cin>>x;
        rez+=x*pwer(b,n-i);
    }

    cout<<rez;
    return 0;
}
