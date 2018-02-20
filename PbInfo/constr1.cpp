#include <iostream>

using namespace std;

int a[204], b[204];


int main()
{

    int n, x, k=0, s=0;
    cin>>n;

    for(int i=1; i<=n; ++i){cin>>a[i]; s+=a[i];}


    for(int i=1; i<=n; ++i){b[++k]=s-a[i]; cout<<b[k]<<' ';}
    return 0;
}
