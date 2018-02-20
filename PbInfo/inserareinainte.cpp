#include <iostream>
#include <cmath>
using namespace std;
int a[55];
int main()
{
    int n;
    cin>>n; for(int i=1; i<=n; ++i){cin>>a[i];
    if(sqrt(a[i])==floor(sqrt(a[i]))){swap(a[i],a[i+1]);
    a[i]=sqrt(a[i+1]); ++i; ++n;}
    }

    for(int i=1; i<=n; ++i)cout<<a[i]<<' ';

    return 0;
}
