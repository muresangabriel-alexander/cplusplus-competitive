#include <iostream>

using namespace std;
int a[26][26];

int main()
{
    int n, k=1, m;
    cin>>n;

    for(int i=1; i<=n; ++i){
    for(int j=1; j<=n; ++j){ if(i%2==1)a[i][j]=i; else a[i][j]=j; cout<<a[i][j]<<' ';}cout<<'\n';}

    return 0;
}
