//#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>

using namespace std;
ifstream cin("eureni.in");
ofstream cout("eureni.out");

int main()
{
    int n, e, banc=1, s=0, suma, cnt=0;
    cin>>suma>>n>>e;

    for(int i=1; i<=n && banc<=suma; ++i){
            banc*=e;
    }

    while(banc>1 && suma>0){
        int cntbank=suma/banc;
        suma=suma%banc;
        if(cntbank!=0)
        cout<<banc<<' '<<cntbank<<'\n';
        banc/=e;
        cnt+=cntbank;
    }
    if(suma!=0){cout<<1<<' '<<suma<<'\n'; cnt+=suma;}
    cout<<cnt;
    return 0;
}
