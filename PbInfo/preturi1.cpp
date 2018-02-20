#include <iostream>
#include <limits.h>
using namespace std;
//int a[103][103];
int b[103];

int main()
{
    int n, m ;

    cin>>n;
    for(int i=1; i<=n; ++i)cin>>b[i];

    cin>>m;
    int minSUm=INT_MAX;
    int x;
    for(int i=1; i<=m; ++i)
    {
    int s=0;
    bool minusUnu =0;
        for(int j=1; j<=n; ++j)
        {cin>>x;
            if(x==-1)minusUnu=1;
            s+=x*b[j];
        }
     if(minusUnu)continue;
     else minSUm=min(s,minSUm);
    }

    cout<<minSUm;

    return 0;
}