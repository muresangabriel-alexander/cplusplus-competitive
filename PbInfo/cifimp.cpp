#include <iostream>

using namespace std;

int main()
{
    int a, cifra, cnt=0;

    cin>>a;

    for(int i=1; i<=3; ++i)
    {
        if((a%10)%2==1){++cnt;}
        a=a/10;
    }

    cout<<cnt;
    return 0;
}
