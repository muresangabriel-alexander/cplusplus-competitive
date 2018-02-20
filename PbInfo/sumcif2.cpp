#include <iostream>

using namespace std;

int main()
{
    int n, cnt=0, s=0;
    int a[13];

    cin>>n;

    while (n>0){
    a[++cnt]=n%10;
    n/=10;
    }
//if(cnt%2==0)--cnt;

    for(int i=cnt; i>=1; i-=2)s+=a[i];
    cout<<s;
    return 0;
}
