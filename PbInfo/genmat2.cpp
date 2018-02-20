#include <iostream>

using namespace std;
int a[26][26];

int main()
{
    int n;
    cin>>n;

    for(int j=0; j<n; ++j){
    for(int i=0; i<n; ++i){if(i==j){a[i][j]=0;}else a[i][j]=n-i;  cout<<a[i][j]<<' ';}cout<<'\n';}

    return 0;
}
