#include <fstream>

using namespace std;
ifstream cin("sumperm.in");
ofstream cout("sumperm.out");

int v[12];

int main()
{
    unsigned long long n, rez=0, s=0;
    cin>>n;
    for(int i=1; i<=n; ++i)cin>>v[i];

    for(int i=1; i<=n; ++i){
        rez=rez*10 + v[i];
    }
    s+=rez;
    rez=0;
   for(int k=1; k<n; ++k){
        int x=v[1];
        for(int i=2; i<=n; ++i)v[i-1]=v[i];
        v[n]=x;
        for(int i=1; i<=n; ++i)rez=rez*10 + v[i];
        s+=rez;
        rez=0;
    }

cout<<s;
    return 0;
}
