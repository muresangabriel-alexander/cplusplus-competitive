#include <iostream>

using namespace std;
bool prim(int n){
if(n==0 || n==1) return 0;
if(n==2) return 0;
if(n%2==0)return 0;

for(int d=3; d*d<=n; d+=2){if(n%d==0)return 0;}
return 1;
}

int main()
{
    int n, x, cnt=0, iMax=-1;
    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>x;
    if(prim(x) && iMax<x){iMax =x; cnt=0;}
    if(x==iMax)++cnt;
    }

    if(iMax == -1 || cnt==0){cout<<"NU EXISTA"; return 0;}
cout<<iMax<<' '<<cnt;
    return 0;
}
