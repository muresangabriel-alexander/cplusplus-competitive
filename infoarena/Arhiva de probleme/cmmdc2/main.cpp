//#include <iostream>
#include <fstream>
using namespace std;

ifstream cin("cmmdc2.in");
ofstream cout("cmmdc2.out");
int a[1000005];
int aa[1000005];
int maxx=0;
int main()
{
    int n;
    int x;
    int k;
    cin>>n>>k;
    for(int i=1; i<=n; ++i){cin>>x; a[x]++; maxx=max(maxx, x);}

    for(int i=1; i<=maxx; ++i)
        {
            for(int j=i; j<=maxx; j+=i)
                aa[i]+=a[j];
        }

    for(int i=maxx; i; --i)
    if(aa[i]>=k)
        {
            cout<<i<<'\n';
            for(int j=maxx/i*i; j; j-=i)
                {
                   // cout<<j<<' '<<maxx/i*i<<' '<<maxx<<'\n';
                    while(a[j]>0)
                        {
                        cout<<j<<' ';
                        if(--k==0)return 0;
                        --a[j];
                        }


                }
        }
    return 0;
}

