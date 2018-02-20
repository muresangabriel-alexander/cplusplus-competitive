#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("unice1.in");
ofstream cout("unice1.out");
int a[1004];
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i)cin>>a[i];
    sort (a+1, a+n+1);
    int cnt=0;
    for(int i=1; i<=n; ++i){
        if(a[i]!=a[i+1])++cnt;
        else{while(a[i]==a[i+1])++i;}
    }
    cout<<cnt;
        return 0;
}
