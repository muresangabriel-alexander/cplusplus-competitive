#include <fstream>


using namespace std;
ifstream cin("permutari.in");
ofstream cout("permutari.out");

int n;
int a[20], used[20];

void afis()
{
for(int i=1; i<=n; ++i)cout<<a[i]<<' ';
cout<<'\n';
}

void bak(int k)
{
    if(k==n+1) afis();
    else
        {
            for(int i=1 ; i<=n; ++i)
                if(!used[i])
                {
                    a[k]=i;
                    used[i]=1;
                    bak(k+1);
                    used[i]=0;
                }
        }
}
int main()
{
    cin>>n;
    bak(1);
    return 0;
}
