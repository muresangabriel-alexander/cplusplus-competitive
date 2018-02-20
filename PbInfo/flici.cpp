#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;
ifstream cin("flici.in");
ofstream cout("flici.out");

int v1[100004];
int v2[100004];

int main()
{
    int n ;
    cin>>n;
    for(int i=1; i<=n; ++i)cin>>v1[i];
    for(int i=1; i<=n; ++i)cin>>v2[i];
    sort(v1+1, v1+n+1);
    sort(v2+1, v2+n+1);
    int s=0;
    for(int i=1; i<=n; ++i){
    s+=abs(v1[i] - v2[i]);
    }
    cout<<s;

    return 0;
}
