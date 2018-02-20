#include <iostream>
#include <cstring>
using namespace std;
char s[30];

int main()
{
    cin>>s;
    int n = strlen(s);
    for(int j=n-1; j>=0; --j)
    {for(int i=0; i<=j; ++i)cout<<s[i]; cout<<'\n';}

    for(int j=0; j<=n-1; ++j)
    {for(int i=j; i<=n-1; ++i)cout<<s[i]; cout<<'\n';}
    return 0;
}
