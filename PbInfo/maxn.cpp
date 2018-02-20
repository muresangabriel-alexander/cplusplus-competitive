//#include <iostream>
#include <fstream>
using namespace std;
ifstream cin("maxn.in");
ofstream cout("maxn.out");
//int a[100000]
int main()
{
    int x, n, iMax=-1;
    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>x;
    if(x>iMax){iMax=x;}
    cout<<iMax<<' ';

    }
    return 0;
}
