#include <iostream>

using namespace std;

int main()
{
    int a[502], n;
    bool cond=true;

    cin>>n;
    for(int i=1; i<=n; ++i){
cin>>a[i];
int j=i-1;
while(j>=1)
    {if(a[i]==a[j])cond=false;
    --j;}
    }

    if(cond)cout<<"DA";
    else cout<<"NU";
    return 0;
}
