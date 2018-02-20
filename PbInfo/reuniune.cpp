//#include <iostream>
#include <fstream>
using namespace std;
ifstream cin("reuniune.in");
ofstream cout("reuniune.out");


int main()
{
    int n,m,k,l,a[1001], b[1001], c[2001], d[1001];
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=m;i++) cin>>b[i];
    int i=1, j=1;
    k=l=0;
    while(i<=n && j<=m)
        if(a[i]<b[j]) c[++k]=a[i++];
        else if(b[j]<a[i]) c[++k]=b[j++];
             else {c[++k]=a[i++];  j++;}
    while(i<=n) c[++k]=a[i++];
    while(j<=m) c[++k]=b[j++];
    for(i=1; i<=k;i++) cout<<c[i]<<" ";
    return 0;
}
