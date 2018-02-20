#include <fstream>

using namespace std;
ifstream cin("combinari.in");
ofstream cout("combinari.out");

int n, k,a[40];

void combinari(int p, int q)
{
    if(p<=k)
    {
        for(int i=q+1; i<=n; ++i)
        {
        a[p]=i;
        combinari(p+1,i);
        }
    }
    else
    {
        for(int i=1; i<=k; ++i)cout<<a[i]<<' ';
        cout<<'\n';
    }
}


int main()
{
    cin>>n>>k;
    combinari(1,0);
    return 0;
}
