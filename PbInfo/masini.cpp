#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("masini.in");
ofstream cout("masini.out");

short a[1004];
int main()
{
   int n, t, s=0, i, cnt=0;
   cin>>n>>t;
   for(int i=1; i<=n; ++i)cin>>a[i];
   sort(a+1, a+n+1);
   for( i=1; i<=n && s<=t;++i){
        s+=a[i]; ++cnt;
    //    cout<<a[i]<<' '<<s<<'\n';
   }
    --cnt;
    if(a[1]>t)--cnt;
   cout<<cnt;
    return 0;
}
