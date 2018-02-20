#include <iostream>

using namespace std;

int main()
{
    int n, t, ang_t, prod=0;
    cin>>n>>t;

    for(int i=1; i<=n; ++i){
    cin>>ang_t;
    prod += t/ang_t;
    }

    cout<<prod;
    return 0;
}
