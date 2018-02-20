#include <iostream>

using namespace std;
int a[1002];


int main()
{
    int n, x, cnt=0, iMax=-1, iMaxSt=1, iMaxDr;
    cin>>n;

    for(int i=1; i<=n; ++i)cin>>a[i];

    for(int i=1; i<=n; ++i){
    int iSt =i;

    while(a[i]==a[i+1] && i+1<=n){++cnt; ++i;}
        if(cnt>=iMax){iMax =cnt; iMaxSt=iSt; iMaxDr=i;}
    cnt=0;
    }
    cout<<iMaxSt<<' '<<iMaxDr;
    return 0;
}
