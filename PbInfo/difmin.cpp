#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
int a[10006];

int main()
{
    int n, difMin=INT_MAX, t1, t2 ;
    cin>>n;
    cin>>a[1];

    if(n!=1){
    for(int i=2; i<=n; ++i){cin>>a[i];
    if(abs(a[i]-a[i-1])<difMin){difMin=abs(a[i]-a[i-1]);
    t1 = a[i-1];
    t2 = a[i];
    }
    }
    cout<<t1<<' '<<t2;}

    else cout<<a[1];
    return 0;
}