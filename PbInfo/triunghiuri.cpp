#include <iostream>
#include <algorithm>

using namespace std;
int a[105];
int main()
{
int n, i, cnt=0;
cin>>n;

    for( i = 1; i<=n; ++i){cin>>a[i];}

    for(int i = 1; i<=n; ++i)
    for(int j = i+1; j<=n; ++j)
    for(int k = j+1; k<=n; ++k){
       if(a[k] < a[i] + a[j] && a[i] < a[k] + a[j] && a[j] < a[i] + a[k]) ++cnt;
    }

    cout<<cnt;
    return 0;
}
