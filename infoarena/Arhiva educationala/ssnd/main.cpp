#include <fstream>
#include <bitset>
using namespace std;
const int MAX_N=1000005;
const int MOD=9973;

ifstream cin("ssnd.in");
ofstream cout("ssnd.out");


long long n;
int t, k, p[MAX_N];
bitset <MAX_N> ciur;

void erath()
{
    for(int i=2; i<=MAX_N; ++i)
    {
        if(!ciur[i])
        {
            p[++k]=i;
            for(int j=i+i; j<MAX_N; j+=i)
            ciur[j]=1;
        }
    }
}

inline int pow(int x, int p)
{
    int rez=1;
    x%=MOD;
    for(;p;p>>=1)
        {
            if(p&1)
            {
                rez*=x;
                rez%=MOD;
            }

            x*=x;
            x%=MOD;
        }

    return rez;
}

void solve()
{
    cin>>n;
    int nd=1 , sd=1;

        for(int i=1 ; i<=k && p[i]*p[i]<=n; ++i)
        {
            if(n%p[i])continue;
            int put = 0;
            while (n%p[i]==0) n/=p[i],++put;

            nd*=(put+1);
            int p1 = (pow(p[i], put+1)-1)%MOD;
            int p2 = pow(p[i]-1, MOD-2) % MOD;


            sd = (((sd*p1)%MOD)*p2)%MOD;
        }

        if(n>1)
        {
        nd*=2;
        sd=(1LL*sd*(n+1)%MOD);

        }
        cout<<nd<<' '<<sd<<'\n';
}

int main()
{
    erath();

    int t;
    cin>>t;

    while(t--){solve();}

    return 0;
}
