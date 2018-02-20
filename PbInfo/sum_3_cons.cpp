#include <iostream>

using namespace std;

int main()
{
    int n, a;
    cin>>n;
    n=n - 3;
    if(n%3==0){cout<<n/3<<' '<<n/3 + 1<<' '<<n/3 + 2;}
    else cout<<"NU EXISTA";
    return 0;
}
