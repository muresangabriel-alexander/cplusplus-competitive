//#include <iostream>
#include <limits.h>
#include <fstream>
using namespace std;
ifstream cin("maxminmatrice.in");
ofstream cout("maxminmatrice.out");

int a[60][60];

int main()
{
    int n,m, iMin=INT_MAX, iMax=INT_MIN;
    cin>>n>>m;

    for(int i =1; i<=n; ++i){
    for(int j=1; j<=m; ++j){
    cin>>a[i][j];
    if(iMin>a[i][j])iMin=a[i][j];}
    iMax=max(iMax, iMin);
    iMin=INT_MAX;}

cout<<iMax;
    return 0;
}
