#include <fstream>

using namespace std;
ifstream cin("pareimpare.in");
ofstream cout("pareimpare.out");

int fr[105];
int main()
{
    int x, distinct=0, d;
    bool ok1=0, ok2=0;
    while(cin>>x){
        ++fr[x];
    }

    for(int i=1; i<=99; i+=2)if(fr[i]!=0){ cout<<i<<' '; }
    cout<<'\n';

    for(int i=98; i>=0; i-=2)if(fr[i]!=0 ){cout<<i<<' '; }

    return 0;
}
