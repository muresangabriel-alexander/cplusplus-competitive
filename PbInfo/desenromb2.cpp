#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int d_or=1;
    d_or +=(n-1)*2;


    for(int r=1; r<=n-1; r++)
    {
        for(int i=r; i<n; ++i)cout<<'#';
        for(int i=1; i<r*2-1; i++)cout<<'*';
        cout<<'*';
        for(int i=r; i<n; ++i)cout<<'#';
        cout<<'\n';
    }

    for(int i=1; i<=n*2-1; ++i)cout<<'*';

    cout<<'\n';
    for(int r=n-1; r>=1; r--)
    {
        for(int i=r; i<n; ++i)cout<<'#';
        for(int i=1; i<r*2-1; i++)cout<<'*';
        cout<<'*';
        for(int i=r; i<n; ++i)cout<<'#';
        cout<<'\n';
    }


    return 0;
}
