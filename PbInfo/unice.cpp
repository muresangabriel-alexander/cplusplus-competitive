#include <fstream>

using namespace std;
ifstream cin("unice.in");
ofstream cout("unice.out");
int fr[100004];

int main()
{
    int n, x, iMax=-1;
    cin>>n; for(int i=1; i<=n; ++i){
    cin>>x;
    ++fr[x];
    if(iMax<x)iMax=x;
    }
    for(int i=0; i<=iMax; ++i){if(fr[i]==1)cout<<i<<' ';}
    return 0;
}
