#include <iostream>

using namespace std;

int main()
{
    int n;
    char c, b;

    cin>>n>>c>>b;
    for(int i=1; i<=n; ++i)
    {
        if(i%2==1)
        {
            for(int j=1; j<=n; ++j)
            {
                if(j%2==1) {cout<<c;}
                else {cout<<b;}
            }
        }
        else
        {
            for(int j=1; j<=n; ++j)
            {
                if(j%2==0) {cout<<c;}
                else {cout<<b;}
            }
        }
        cout<<'\n';
    }
    return 0;
}
