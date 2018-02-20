#include <iostream>

using namespace std;

int main()
{
    int n, x, sum=0;
    cin>>n;
    for(int i=1; i<=n; ++i){
     cin>>x;
     sum = sum + x;
    }
    cout<<sum;

    return 0;
}
