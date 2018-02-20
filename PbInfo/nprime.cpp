#include <iostream>

using namespace std;
bool prim(int n){
for(int d=3; d*d<=n; d+=2){if(n%d==0)return 0;}
return 1;
}

int main()
{
    int n;
    cin>>n;
    cout<<2<<' ';
    --n;
    int i=3;
    for(int cnt=1; cnt<=n; ){
        if(prim(i)){cout<<i<<' '; ++cnt; i+=2;}
        else i+=2;
    }

    return 0;
}
