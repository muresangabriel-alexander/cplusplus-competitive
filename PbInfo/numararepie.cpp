#include <iostream>
#include <algorithm>
using namespace std;


int iMax = 0;
int a[205], s, fr[90], cnt;

int main()
{
    int x, n;
    cin>>x;
    for(int i=1; i<=x; ++i){cin>>a[i];}

    for(int i=1; i<=x; ++i)
    for(int j = i; j<=x; ++j){

        if(i!=j && __gcd(a[i], a[j])==1)++cnt;
        }

        cout<<cnt;
        return 0;
    }
