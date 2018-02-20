#include <fstream>

using namespace std;
ifstream cin("zone.in");
ofstream cout("zone.out");

int zona1[102], zona2[102], zona3[102];
int main()
{
    int n, ultimparpos=0, primparpos=0;
    cin>>n;

    for(int i=1; i<=n; ++i) cin>>zona1[i];
    for(int i=1; i<=n; ++i) cin>>zona2[i];
    for(int i=1; i<=n; ++i) cin>>zona3[i];

    for(int i=1; i<=n; ++i)  if(zona1[i]%2==0) {primparpos = i; break;}
    for(int i=1; i<=n; ++i)  if(zona3[i]%2==1) {ultimparpos = i;}

    if(primparpos !=0 && ultimparpos !=0) swap(zona1[primparpos] , zona3[ultimparpos]);

    for(int i=1; i<=n; ++i) cout<<zona1[i]<<' ';
    for(int i=1; i<=n; ++i) cout<<zona2[i]<<' ';
    for(int i=1; i<=n; ++i) cout<<zona3[i]<<' ';


    return 0;
}
