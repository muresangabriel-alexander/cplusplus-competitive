#include <iostream>

using namespace std;

int main()
{
    int n, cnt=1, s=0;
    cin>>n;

    while (n>0){
    if(cnt%2==0)s+=n%10;
    n/=10;
    ++cnt;
    }

    cout<<s;
    return 0;
}
