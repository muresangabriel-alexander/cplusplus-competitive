#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("sirpie.in");
ofstream cout("sirpie.out");

int n, input[25], a[25], used[25];



void afis()
{
    for(int i=1 ;i<n; ++i)if(__gcd(input[a[i]],input[a[i+1]])!=1)return ;
    for(int i=1; i<=n ;++i)cout<<input[a[i]]<<' ';
    cout<<'\n';
}

void bak(int k)
{
    if(k==n+1)afis();
    else
    {
        for(int i=1; i<=n; ++i)
        if(!used[i])
            {
                a[k]=i;
                used[i]=1;
                bak(k+1);
                used[i]=0;
            }
    }

}

int main()
{

    cin>>n;
    for(int i=1; i<=n; ++i)cin>>input[i];
    sort(input+1,input+n+1);
    bak(1);
    return 0;
}
