#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("cautbin.in");
ofstream cout("cautbin.out");
int a[100005];

int bsearch0(int lb, int ub, int x)
{
    int m;

    while(lb<=ub)
    {
        m=(lb+ub)/2;
        if(x>=a[m])
        lb=m+1;
        else
        ub=m-1;
    }

    m=(lb+ub)/2;
    if(a[m]>x)--m;
    if(a[m]==x)return m;
    else return -1;
}

int bsearch1(int lb, int ub, int x)
{
    int m, n=ub;

    while(lb<ub)
    {
        m=(lb+ub)/2;
        if(a[m]<=x)
            lb=m+1;
        else
            ub = m;
    }
        m = (lb+ub)/2;
        if(a[m]>x)--m;
        return m;

}

int bsearch2(int lb, int ub, int x)
{
    int m;
    while(lb<ub)
    {
        m=(lb+ub)/2;
        if(x>a[m])
            lb=m+1;
        else
            ub=m;
    }

    m=(lb+ub)/2;
    if(a[m]<x)++m;
    return m;
}

int main()
{
    int n ;
    int m;
    cin>>n;
    for(int i=1; i<=n; ++i)cin>>a[i];

    cin>>m;
    for(int i=1; i<=m; ++i)
    {
        int op, x;
        cin>>op>>x;

        if(op==0)cout<<bsearch0(1,n,x)<<'\n';
        if(op==1)cout<<bsearch1(1,n,x)<<'\n';
        if(op==2)cout<<bsearch2(1,n,x)<<'\n';
    }
    return 0;
}
