#include <iostream>
#include <limits.h>
using namespace std;

int a[103];
int main()
{
    int iMax=INT_MIN, iMin=INT_MAX, n, x, m;
    cin>>n;

    for(int i=1; i<=n; ++i){cin>>a[i];
    }
    cin>>m;
    for(int i=1; i<=m; ++i){cin>>x;
     if(x>iMax)iMax=x;}

     int cnt=0;
    for(int i=1; i<=n; ++i){if(a[i]>iMax)++cnt;
    }
    cout<<cnt;
    return 0;
}
