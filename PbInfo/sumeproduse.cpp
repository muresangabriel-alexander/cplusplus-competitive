#include <iostream>

using namespace std;

int b;
int x, y;
unsigned long long s=0, ss=0;
int main()
{
    int n;
    cin>>n;
    n/=2;
      long long s=0;
    for(int i=1; i<=n; ++i){cin>>x; s+=x;}
    for(int i=1; i<=n; ++i){cin>>x; ss+=x;}


    cout<<s*ss;
    return 0;
}
