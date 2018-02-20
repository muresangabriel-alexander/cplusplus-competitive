#include <iostream>

using namespace std;

int main()
{
    int n, s=0;
    cin>>n;

    for(int i=1; i*i<=n; ++i){
        if(i%2==1 && n%i==0)s+=i;
        if((n/i)%2==1 && n%(n/i)==0)s+=n/i;
    }

    cout<<s;
    return 0;
}
