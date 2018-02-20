#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[30];
    char vocale[]={'a','e','i','o','u'};
    cin>>s;
    int n = sizeof(s);

    for(int i=0; i<=n; ++i)
        for(int j=0; j<=4; j++)if(s[i]==vocale[j]){s[i]=s[i]-32; break;}

    cout<<s;
    return 0;
}
