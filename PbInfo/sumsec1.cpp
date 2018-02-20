#include <iostream>

using namespace std;
int a[1002];


int main()
{
    int n, iFirst, iLast, s=0;
    bool cond=true;

    cin>>n;

    for(int i=1; i<=n; ++i){
    cin>>a[i];

    if(a[i]%2==1 && cond ==true){iFirst=i; cond=false;}
    if(a[i]%2==1 )iLast=i;
    }

    for(int i=iFirst; i<=iLast; ++i){
    s+=a[i];
    }

    cout<<s;
    return 0;
}
