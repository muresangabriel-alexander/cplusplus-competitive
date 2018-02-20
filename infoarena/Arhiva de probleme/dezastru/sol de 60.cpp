#include <fstream>
#include <iomanip>
using namespace std;
ifstream cin ("dezastru.in");
ofstream cout("dezastru.out");

double a[40];
int aa[40];
int n, k;
double contor, probabil;

void bak(int p, int q)
{
    if(p<=k)
    {
        for(int i=q+1; i<=n; ++i)
        {
            aa[p]=i;
            bak(p+1, i);
        }
    }
    else
    {   double pp=1;
        for(int i=1 ;i<=k; ++i)pp*=a[aa[i]];
        ++contor;
        probabil+=pp;
    }


}


int main()
{

    cin>>n>>k;
    for(int i=1; i<=n; ++i)cin>>a[i];
    bak(1,0);
    double ans=probabil;
    cout<<fixed<<setprecision(6)<<ans/contor;
    return 0;
}
