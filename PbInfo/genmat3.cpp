#include <iostream>

using namespace std;
int a[26][26];

int main()
{
    int n, k=1, m;
    cin>>n>>m;

    for(int j=0; j<n; ++j){
    for(int i=0; i<m; ++i){ a[i][j]=k*k; k+=2; cout<<a[i][j]<<' ';}cout<<'\n';}

    return 0;
}
