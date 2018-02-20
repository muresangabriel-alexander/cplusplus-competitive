#include <iostream>

using namespace std;
bool fr[102];

int main()
{
    int n, x;
    bool okappa=false;
    cin>>n;for(int i=1; i<=n; ++i){cin>>x;  if(x<=101)fr[x]=1;}

    for(int i=1; i<=100; ++i){if(fr[i]==0){cout<<i; return 0; okappa=true;}}
    if(!okappa)cout<<101;
    return 0;
}
