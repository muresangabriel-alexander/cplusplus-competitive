#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, x, y;
    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>x>>y;
    cout<<__gcd(x,y)<<'\n';}

    return 0;
}
