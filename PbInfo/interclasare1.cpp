#include <fstream>

using namespace std;
ifstream cin("interclasare1.in");
ofstream cout("interclasare1.out");

int main()
{
    int n,m,k,l,a[100001], b[100001], c[200004];
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    cin>>m;
    for(int i=1;i<=m;i++) cin>>b[i];

    int i=1, j=1;
    k=0;

    while(i<=n && j<=m)
        if(a[i]<b[j]) c[++k]=a[i++];
        else if(b[j]<a[i]) c[++k]=b[j++];
             else {c[++k]=a[i]; i++; j++;}
    while(i<=n) c[++k]=a[i++];
    while(j<=m) c[++k]=b[j++];
    for(i=1; i<=k;i++){ cout<<c[i]<<" "; if(i%10==0)cout<<'\n';}
    return 0;
}
