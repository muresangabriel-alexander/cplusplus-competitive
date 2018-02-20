#include <iostream>

using namespace std;

bool prim(int n){
    for(int d=3; d*d<=n; d+=2)if(n%d==0)return 0;
    return 1;
}

int main()
{


    int t;
    cin>>t;
    int iMax=0;
    int iiMax=0;

    for(int i=1; i<=t; ++i){
    int n;
    int cnt=0;
    cin>>n;
    int nn=n;
    if(n%2==0)++cnt;

    for(int i=3; i*i<=n; i+=2)
    if(n%i==0 && prim(i))++cnt;



    if(iMax<cnt )iMax=cnt,iiMax=nn;
    else if(iMax==cnt && iiMax>nn)iiMax=nn;
    }

    cout<<iiMax;
    return 0;
}
