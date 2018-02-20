#include <iostream>

using namespace std;
bool fr[10004];

int main()
{
    int n , m ;
    cin>>n>>m;
    int x;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j){
        cin>>x;
        fr[x]=1;
    }

    int s=0;
    for(int i=2; i<=10001; i+=2)
        if(fr[i])s+=i;

    cout<<s;
    return 0;
}
