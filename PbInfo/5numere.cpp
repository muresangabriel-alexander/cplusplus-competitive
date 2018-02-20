#include <iostream>
#include <algorithm>
using namespace std;

int a[6];

int main()
{
    int iMax=1, s=0 ;

for(int i = 1; i<=5; ++i)
    cin>>a[i];

    sort(a+1, a+5+1);

s = a[5] + a[4] + a[3];
    cout<<s<< ' ';
    return 0;
}
