#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;
int a[1002], iMin = INT_MAX, iMax = INT_MIN;
int main()
{
    int n, min_poz, max_poz;
    cin>>n;

    for(int i = 1; i<=n; ++i){cin>>a[i];
    if(a[i]<iMin) {iMin = a[i]; min_poz = i;}
    if(a[i]>iMax) {iMax = a[i]; max_poz = i;}
    }

    if(min_poz>max_poz) swap (min_poz , max_poz);

    sort(a+min_poz, a+max_poz+1);

    for(int i = 1; i<=n; ++i)cout<<a[i]<<' ';


    return 0;
}
