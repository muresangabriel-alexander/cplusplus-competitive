#include <iostream>

using namespace std;

int main()
{
    int n, k, p, cnt=0;
    cin>>n>>k>>p;

    int x=1, y=2, z, s=2;
    if(k==1 || k==2)++cnt;


    for(int i=3; i<=n; ++i){
        z=(x+y)%10;
        if(z==2 || z==3 || z==5 || z==7)s+=z;
        if(z==k)++cnt;

        x=y;
        y=z;

    }
p%=60;
x=1; y=2;
for(int i=3; i<=p; ++i){
        z=(x+y)%10;
        x=y;
        y=z;}


    cout<<s<<'\n';
    cout<<cnt<<'\n';
    cout<<z;

    return 0;
}
