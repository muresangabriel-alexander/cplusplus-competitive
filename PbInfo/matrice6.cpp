//#include <iostream>
#include <limits.h>
#include <fstream>
using namespace std;
ifstream cin("matrice6.in");
ofstream cout("matrice6.out");
int a[105][105];
bool pos[150];
int main()
{
    int n, iMax=INT_MIN, iMin=INT_MAX;
    cin>>n;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j){cin>>a[i][j]; iMax=max(a[i][j], iMax); iMin=min(a[i][j],iMin);}

    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j)if(a[i][j]==iMax){pos[i]=1; break;}

    for(int i=1; i<=n; ++i){
    for(int j=1; j<=n; ++j){
    if(pos[i]==1)a[i][j]+=iMin;
    cout<<a[i][j]<<' ';
    }cout<<'\n';}


    return 0;
}
