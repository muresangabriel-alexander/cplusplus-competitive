#include <iostream>

using namespace std;
int a[26][26];

int main()
{
    int n, k=1, m;
    cin>>n;

    for(int j=1; j<=n; ++j){
    for(int i=1; i<=n; ++i){ a[i][j]=(i*j)%10; cout<<a[i][j]<<' ';}cout<<'\n';}

    return 0;
}
