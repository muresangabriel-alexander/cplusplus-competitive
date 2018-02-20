#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int cnt=0;
    int p=5;
    while(p<=n){
        cnt+=n/p;
        p*=5;
    }

    cout<<cnt;
    return 0;
}
