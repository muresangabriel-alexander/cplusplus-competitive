#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int pir=0;
    for(int i =1; i<=n; ++i)
        {
            int x=i;

            pir+=(x*x);
            cout<<pir<<' ';
        }
    return 0;
}
