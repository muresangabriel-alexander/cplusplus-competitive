#include <fstream>
using namespace std;
ifstream cin("cifreord1.in");
ofstream cout("cifreord1.out");
int fr[10], cnt;

int main()
{
    int n;

    while(cin>>n){
    if(n==0) ++fr[0];
    while(n>0){
    ++fr[n%10];
    n/=10;}
}

    for(int i=9; i>=0; --i){
        for(int j=1; j<=fr[i]; ++j){
        cout<<i<<' '; ++cnt;
        if(cnt%20==0)cout<<'\n';
        }
    }

    return 0;

    }
