#include <fstream>

using namespace std;
ifstream cin("crb.in");
ofstream cout("crb.out");
int a[1005], posinit[1005], pos[1005];

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i){cin>>a[i]; posinit[i]=i; pos[i]=i;}

    for(int i=1; i<=n; ++i)
    for(int j=i+1; j<=n; ++j){
        if(a[i]<a[j]){
            swap(a[i], a[j]);
            swap(pos[i], pos[j]);
        }
    }

    int cnt=0;
    for(int i=1; i<=n; ++i){
        if(posinit[i]==pos[i])++cnt;
    }

    cout<<cnt;
    return 0;
}
