#include <fstream>

using namespace std;
ifstream cin("interclasare2.in");
ofstream cout("interclasare2.out");
int n,m,k,l,a[100001], b[100001], d[100004];

int main()
{

    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    cin>>m;
    for(int i=1;i<=m;i++) cin>>b[i];

    int i=1, j=1;
    k=0;

      while(i<=n && j<=m)
        if(a[i]<b[j]) i++;
        else if(b[j]<a[i])j++;
             else { d[++l]=a[i++]; j++;}

    for(i=1; i<=l;++i){ cout<<d[i]<<" "; if(i%10==0)cout<<'\n';}
    return 0;
}
