#include <fstream>
#include <cmath>
//#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;
ifstream cin("smartphone.in");
ofstream cout("smartphone.out");

int a[10005];

int main()
{
    int n;
    int c;
    cin>>c>>n;
    for(int i=1; i<=n; ++i)cin>>a[i];
    sort(a+1,a+n+1);

    if(c==1)cout<<a[n];
    else {int nn=n; while(a[n]==a[nn])--nn; cout<<a[nn];}


    return 0;
}
