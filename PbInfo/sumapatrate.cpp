#include <iostream>

using namespace std;

int main()
{
    int n;
    int s=0;
    cin>>n;

    for (int i=1; i<=n; ++i)s+=i*i;
    cout<<"Rezultatul este "<<s;
    return 0;
}
