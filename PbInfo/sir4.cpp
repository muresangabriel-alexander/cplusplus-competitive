#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,p,k,v,pas;
    cin>>p;
    //cerinta 1
    /*int d=1+8*p;
    int x=(-1+sqrt(d))/2;
    v=1,pas=4;
    for(int i=1;i<x;i++)
    {
        v=v+pas;
        pas=pas+2;
    }
    if(sqrt(d)!=floor(sqrt(d)))
        for(int i=1;i<=p-x*(x+1)/2;i++) v=v+2;
    cout<<v<<endl;*/
    cout<<p/2+1<<endl;
    //cerinta 2
    cin>>n;
    if(n==1) cout<<1<<endl;
    else
    {
        v=1; pas=4;
        for(int i=1;i<n-1;i++)
        {
            v=v+pas;
            pas=pas+2;
        }
        int f[10]={0};
        for(int i=1;i<=n;i++)
        {
            v=v+2;
            int u=v;
            while(u>0)
            {
                f[u%10]++;
                u=u/10;
            }
        }
        int max=-1;
        for(int c=0;c<=9;c++)
            if(f[c]%2==1) max=c;
        for(int c=0;c<=9;c++)
            if(f[c]%2==1) f[c]--;
        for(int c=9;c>=0;c--)
            for(int j=1;j<=f[c]/2;j++) cout<<c;
        if(max!=-1) cout<<max;
        for(int c=0;c<=9;c++)
            for(int j=1;j<=f[c]/2;j++) cout<<c;
        cout<<endl;
    }
    //cerinta3
    cin>>k;
    int i=1;
    while(i*i*i<k) i++;
    if(i*i*i==k) cout<<i;
    else cout<<0;
    return 0;
}