#include <iostream>

using namespace std;

int main()
{
    int s=0, n, x;
    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>x;
    while(x>9){x=x/10;}
    s=s+x;
    }
    cout<<s;
    return 0;
}
