#include <iostream>

using namespace std;
int v[60];

int main()
{
    int n, a, m = 0, cnt=1;
    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>a;
    v[++m] = a;
    ++cnt;
    if(a%2==0){v[++m] = a*2; ++cnt; }
    }

     for(int i=1; i<cnt; ++i){
    cout<<v[i]<<' ';}
    return 0;
}
