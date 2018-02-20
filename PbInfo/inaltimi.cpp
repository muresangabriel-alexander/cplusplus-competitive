#include <iostream>

using namespace std;
int a[1003], pos[1003];


int main()
{
    int n, j;
    cin>>n; for(int i=1; i<=n; ++i){
    cin>>a[i];
    pos[i]=i;
    j=i;
    while (j > 0 && a[j - 1] > a[j]) {swap(a[j], a[j-1]); swap(pos[j], pos[j-1]); j--; }
 }
    for(int i=1; i<=n; ++i)cout<<pos[i]<<' ';

    return 0;
}
