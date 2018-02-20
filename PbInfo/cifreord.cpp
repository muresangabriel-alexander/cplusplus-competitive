#include <fstream>

using namespace std;
ifstream cin("cifreord.in");
ofstream cout("cifreord.out");
int fr[10];
int main()
{
    int n, x, cnt=0;
    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>x;
    ++fr[x];
    }


    for(int i=0; i<=9; ++i){
    for(int j=1; j<=fr[i]; ++j){
    cout<<i<<' ';
    ++cnt;
    if(cnt%20==0)cout<<'\n';
    }
    }

    return 0;
}
