#include <iostream>

using namespace std;
int fr[1000005];
int main()
{
    int n , m ;
    cin>>n>>m;

    int x;
    int iMax=0, cnt=0, iBest=0;

    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j){
        cin>>x;
        iMax = max (iMax ,x);
        ++fr[x];
    }

    bool ok = 0;
   for(int i=iMax; i>=1; --i){
   if(fr[i]>=2){cout<<i; ok =1; break; }
   }
    if(!ok)cout<<"IMPOSIBIL";
    return 0;
}
