#include <fstream>

using namespace std;
ifstream cin("arhitectura2.in");
ofstream cout("arhitectura2.out");
int fr[100005];
bool ok[2000005]; int k=1;

int getSucc(int n){
for(int i=n; i>=1; --i)if(fr[i])return i;
}

int main()
{
    int n ;
    cin>>n;

    int iMax=0;
    int iMin=100005;
    for(int i=1; i<=n; ++i){int x; cin>>x; ++fr[x]; iMax=max(iMax,x); iMin=min(iMin,x);}
    cout<<iMax<<' ';
    --fr[iMax];
    ok[k++]=0;

    int pred=iMax;
    int cur=getSucc(iMax+1); --fr[cur];
    int suc=getSucc(cur+1);
    do{
            cout<<cur<<' ';
            if(pred+suc==2*cur)ok[k]=1;
            int aux = pred;
            pred = cur;
            cur = suc; -- fr[cur];
            suc = getSucc(cur+1);
            ++k;
    }while( fr[iMin]>0);

    cout<<iMin;

    cout<<'\n';
    for(int i=1; i<=k; ++i)cout<<ok[i]<<' ';





    return 0;
}
