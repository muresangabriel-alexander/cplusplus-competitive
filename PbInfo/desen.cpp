#include <iostream>

using namespace std;

int main()
{
    int n, c;
    cin>>c>>n;

if(c==1)
{
    for(int i=1; i<=n; ++i)
    {for(int j=1; j<=n; ++j)cout<<i;
    cout<<'\n';}
}
if(c==2)
{
    int d_or=1;
    d_or +=(n-1)*2;


    for(int r=1; r<=n-1; r++)
    {
        for(int i=r; i<n; ++i)cout<<' ';
        for(int i=1; i<r*2-1; i++)cout<<r;
        cout<<r;
        for(int i=r; i<n; ++i)cout<<' ';
        cout<<'\n';
    }

    for(int i=1; i<=n*2-1; ++i)cout<<n;

    cout<<'\n';
    for(int r=n-1; r>=1; r--)
    {
        for(int i=r; i<n; ++i)cout<<' ';
        for(int i=1; i<r*2-1; i++)cout<<r;
        cout<<r;
        for(int i=r; i<n; ++i)cout<<' ';
        cout<<'\n';
    }
    }

if(c==3)
{
for(int i=1; i<=n; ++i)
    {for(int j=1; j<=n*2; ++j)cout<<i;
    cout<<'\n';}
}

 if(c==4)
 {
    for(int r=1; r<=n-1; r++)
    {
        for(int i=r; i<n; ++i)cout<<' ';
        for(int i=1; i<r*2-1; i++)cout<<r;
        cout<<r;
        for(int i=r; i<n; ++i)cout<<' ';
        cout<<'\n';
    }

    for(int i=1; i<=n*2-1; ++i)cout<<n;
 }
    return 0;
}
