#include <iostream>

using namespace std;

int main()
{
    int x, sum=0, ultim=0;
     cin>>x;

    while(x!=ultim){
     sum = sum + x;
     ultim = x;
     cin>>x;

    }
    cout<<sum+x;

    return 0;
}
