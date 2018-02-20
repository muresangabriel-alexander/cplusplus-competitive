#include <fstream>

using namespace std;
ifstream cin("asfalt.in");
ofstream cout("asfalt.out");
int a[10000];

int main()
{
    int n, m, x, y;
    cin>>n>>m;
    for(int i=1; i<=m; ++i){
        cin>>x>>y;
        for(int j=x; j<=y-1; ++j){++a[j];}
    }

    int masph=0, nasph=0;

    for(int i=0; i<n; ++i){
    if(a[i]==0)++nasph;
    else if(a[i]>1)++masph;
    }

    cout<<nasph<<' '<<masph;
    return 0;
}
