#include <fstream>
#include <algorithm>
using namespace std;

ifstream cin("puterik.in");
ofstream cout("puterik.out");
int a[106], nn;

bool putereK(int n, int k){
while(n%k==0)n/=k;
if(n==1)return 1;
return 0;

}
int main()
{
    int n;
    int k;
    int x;

    cin>>n>>k;
    for(int i=1; i<=n; ++i){
        cin>>x;
        if(putereK(x,k))a[++nn]=x;
    }

    sort(a+1, a+1+nn);
    for(int i=1; i<=nn; ++i)cout<<a[i]<<' ';
    return 0;
}
