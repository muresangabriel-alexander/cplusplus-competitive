#include <iostream>

using namespace std;

int main()
{
    int a[1002], n;
    bool cond=true;

    cin>>n;
    for(int i=1; i<=n; ++i)cin>>a[i];
int minlim = min(a[1], a[n]);
int maxlim = max(a[1], a[n]);

    for(int i=1; i<=n; ++i){
    if(a[i]<minlim || a[i]>maxlim)cond=false;
    }

    if(cond)cout<<"DA";
    else cout<<"NU";
    return 0;
}
