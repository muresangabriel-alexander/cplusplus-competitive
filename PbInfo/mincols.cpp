//#include <iostream>
#include <limits.h>
#include <fstream>
using namespace std;
ifstream cin("mincols.in");
ofstream cout("mincols.out");

int a[60][60];

int main()
{
    int n,m, iMin=INT_MAX;
    cin>>n;

    for(int i =1; i<=n; ++i)for(int j=1; j<=n; ++j)cin>>a[i][j];

    for(int i =1; i<=n; ++i){
    for(int j=1; j<=n; ++j){if(iMin>a[j][i])iMin=a[j][i];}cout<<iMin<<' '; iMin=INT_MAX;}
    return 0;
}
