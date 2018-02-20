#include <fstream>
#include <bitset>
#include <vector>

using namespace std;
ifstream cin("damesah.in");
ofstream cout("damesah.out");
const int MAX_N=30;

int n;
pair <int,int> regina[MAX_N];
int cnt;
bitset <MAX_N>col;
bitset <2*MAX_N>dp,ds;

void afisare()
{
++cnt;
    if(cnt==1)
    {
        for(int i=1; i<=n; ++i)
            cout<<regina[i].second<<' ';
        cout<<'\n';
    }
}

//inline int abs(int x){if(x<0)return -x; else return x;}

void backk (int linie)
{
    if(linie==n+1){afisare(); return ;}
    for(int coloana=1; coloana<=n; ++coloana)

        if(!col[coloana] && !dp[linie+coloana-1] && !ds[linie+n-coloana])
        {
                regina[linie]=make_pair(linie,coloana);
                col[coloana]=1;
                dp[linie+coloana-1]=1;
                ds[linie+n-coloana]=1;
                backk(linie+1);
                col[coloana]=0;
                dp[linie+coloana-1]=0;
                ds[linie+n-coloana]=0;
        }
}

int main()
{
    cin>>n;
    backk(1);
    cout<<cnt<<'\n';


    return 0;
}
