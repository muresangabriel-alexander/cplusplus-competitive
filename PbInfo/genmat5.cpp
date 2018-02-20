#include <iostream>

using namespace std;
int a[26];

int main()
{
    int n, k=0, m;
    cin>>n;
    while(n>0){a[++k]=n%10; n/=10;}

    for(int j=1; j<=k; ++j){
    for(int i=1; i<=k; ++i){  cout<<a[i]<<' ';}cout<<'\n';}

    return 0;
}
