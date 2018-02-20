#include <iostream>

using namespace std;
int k;


int main()
{
    int a[102], n, x;
    bool cond=true;

    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>x;
    if(x%2==0)a[++k]=x;
    }

    for(int i=1; i<=k-1; ++i){
    if(a[i]>a[i+1])cond=false;
    }

    if(cond)cout<<"DA";
    else cout<<"NU";
    return 0;
}
