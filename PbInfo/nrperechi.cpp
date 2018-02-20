#include <iostream>
using namespace std;

int prime[13000], k;
bool v[44722];

void eratostene()
{int i, j;
for(i=3;i*i<=44722; i+=2)
    if(v[i]==0)
    for(j=i*i; j<=44722; j+=i)
    v[j]=1;
prime[0]=2;
for(i=3; i<=44722; i+=2)
    if(v[i]==0)
    prime[++k]=i;
}

int descompune(int x)
{
    int p=1, i=0, e=0,xx=x;
    while(x%prime[i]==0)
    {e++;
    x/=prime[i];
    }
    if(e!=0) p*=2*e+1;
    i=1;
    while(x!=1&&prime[i]*prime[i]<=xx)
    {e=0;
        while(x%prime[i]==0)
        {
            e++;
            x/=prime[i];
        }
      if(e!=0)p*=2*e+1;
      i++;
    }
    if(x!=1) p*=3;
    return p;
}
int main()
{
    eratostene();
    int n, x, i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        cout<<descompune(x)<<" ";
    }
    return 0;
}
