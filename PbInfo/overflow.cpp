#include <iostream>

using namespace std;

int main()
{
    int n;
    unsigned long long a, b;
    cin>>n;
    for(int i = 1; i<=n; ++i)
    {
        cin>>a>>b;
if(b == 0)
   cout << 0<< '\n';
   else if(a<=(unsigned long long)18446744073709551615/b)
        {
            cout<<a*b<<'\n';
        }
        else
        {
            cout<<"Overflow!"<<'\n';
        }
    }
    return 0;
}
