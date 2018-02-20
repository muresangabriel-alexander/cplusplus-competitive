#include <iostream>

using namespace std;
int a[505];
bool ciur[1100];
bool fr[1005];

void Er_ciur()
{
for(int i=2; i<=1000;i++)
    if(!ciur[i])
    for(int j=i+i; j<=1000; j+=i)
        ciur[j]=1;
}

int main()
{
    int n;
    cin>>n;
    Er_ciur();

    for(int i=1; i<=n; ++i)cin>>a[i];

    for(int i=1; i<=n; ++i)
    {
        if(a[i]%2==0 && a[i]%4!=0)fr[2]=1;
        for(int d=3; d<=a[i]; d+=2)if(!ciur[d] && a[i]%d==0 && a[i]%(d*d)!=0)fr[d]=1;
    }

    bool ok=0;
    for(int i=2; i<=1000; ++i)//cout<<fr[i]<<' '
    if(fr[i])cout<<i<<' ',ok=1;
    if(!ok)cout<<"Sirul Y este vid.";
    return 0;
}
