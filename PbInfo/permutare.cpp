#include <iostream>
#include <algorithm>
using namespace std;

int a[1004];
int main()
{
    int  m , n, pointy, x;

    cin>>n;for(int i=1; i<=n; ++i)cin>>a[i];
    sort(a+1, a+n+1);

    for(int i=1; i<n; ++i){
        if(a[i]+1!=a[i+1]){cout<<"NU"; return 0;}
    }

    cout<<"DA"; return 0;
}
