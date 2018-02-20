#include <iostream>

using namespace std;

int main()
{
    int n , m ;
    cin>>n>>m;
    int x, iMax = 0, p=1;
    for(int i=1; i<=n; ++i){
        int s=0;
        for(int j=1; j<=m; ++j){cin>>x; if(x%2==0)s+=x;}
        if(iMax<s)iMax = s, p=i;
    }
    cout<<p;
    return 0;
}
