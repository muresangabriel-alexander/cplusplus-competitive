#include <iostream>

using namespace std;
int cif[12];
int x[12], y[12];

int main()
{
    int nn;
    cin>>nn;

    int auxx=nn;
    int n=0;
    int f=1;


    while(auxx>0){
    cif[++n]=auxx%10; auxx/=10;
    f*=n;
    }
    for(int i=1; i<=n/2; ++i)swap(cif[i],cif[n-i+1]);


    int t, m ;
    cin>>t>>m;
    for(int i=1; i<=m; ++i)cin>>x[i]>>y[i];

    t%=f;
    for(int i=1; i<=t; ++i)
        for(int j=1; j<=m; ++j){
            swap(cif[x[j]], cif[y[j]]);
        }

    for(int i=1; i<=n; ++i)cout<<cif[i];




    return 0;
}




