#include <iostream>
#include <fstream>
#include <algorithm>
const int maxn=1005;
using namespace std;

int v[maxn];
int bin_sch(int x,int n)
{
    int st=1;
    int dr=n + 1;
    while(dr>=st)
    {

        int mij=(st+dr)/2;
        if(v[mij]==x)return mij;
        else if(v[mij]<x)st=mij+1;
        else if(v[mij]>x) dr=mij-1;


    }
    return dr;
}
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
        cin>>v[i];

    sort(v+1,v+n+1);
    v[n + 1] = 100000000;
    int nr=0;

    for(int i=1;i<=n-2;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {
            int cnt=bin_sch(v[i]+v[j]-1,n)-j;
            nr=nr+cnt;
        }
    }
    cout<<nr;
    return 0;
}
