#include <iostream>

using namespace std;

bool prim(int n){
    for(int d=3; d*d<=n; d+=2)if(n%d==0)return 0;
    return 1;
}

int main()
{




    int n, m;
    int cnt=0;
    cin>>n>>m;
    int nn=n;
    int mm=n;
    int ok=1;
    if(n%2!=m%2){cout<<"NU"; return 0;}


    int iMin=min(n,m);

    for(int i=3; i*i<=iMin; i+=2)
    if((n%i==0 || m%i==0) && m%i!=n%i && prim(i)){ok=0; break;}



//    cout<<iiMax;
    if(ok)cout<<"DA";
    else cout<<"NU";
    return 0;
}
