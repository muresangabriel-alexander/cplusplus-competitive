#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
char b16[100];
long long n;

int main()
{
    cin>>b16;

    int a = strlen(b16);
    for(int i=0; b16[i]!=0; ++i)
    {
    int c;
    if(b16[i]>='A' && b16[i]<='F')c=b16[i]-'A'+10;
    else c=b16[i]-'0';

    n += (long long)c*pow(16,a-1);
    --a;
    }

    cout<<n;
    return 0;
}
