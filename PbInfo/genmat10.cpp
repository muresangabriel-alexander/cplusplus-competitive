#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    int p=n*m;
    int cnt=0;
    while(p>=1){
    ++cnt;
        cout<<p<<' ';

    if(cnt%m==0)cout<<'\n';
    --p;
    }
    return 0;
}
