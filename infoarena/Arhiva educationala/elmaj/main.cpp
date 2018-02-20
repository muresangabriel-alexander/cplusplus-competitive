#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("elmaj.in");
ofstream cout("elmaj.out");


int a[1000005];
int nr;
int mooreMajority(int n)
{
    int cand = -1;
    int k=0;

    for(int i =1; i<=n; ++i)
    {
        if(k==0){cand=a[i]; k=1;}
        else if(a[i]==cand)++k;
        else --k;
    }

    if(cand<0) return cand;

    //int nr=0;
    for(int i=1; i<=n; ++i)
        if(a[i]==cand)++nr;

    if(nr> n/2)
        return cand;
    else return -1;
}

int main()
{
    int n;
    cin>>n;
    for(int i =1; i<=n; ++i)cin>>a[i];
    int rez = mooreMajority(n);
   // for(int i=1; i<=n; ++i)if(a[i]==rez)++nr;
    cout<<rez<<' '<<nr;

    return 0;
}
