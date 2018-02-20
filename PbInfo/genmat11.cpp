#include <iostream>

using namespace std;
int a[405];
int main()
{
    int n, m=0;
    cin>>n;
    int x=2;
    for(int i=1; i<=n; ++i){
    for(int j=1; j<=n; ++j){while(x%3==0)x+=2; cout<<x<<' '; x+=2; }cout<<'\n';}


}
