#include <fstream>

using namespace std;
ifstream cin("maxsim.in");
ofstream cout("maxsim.out");
int a[1005];
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i)cin>>a[i];
    int j=0, iMax=0, pos1, pos2;
    if(n%2==0){
    for(int i=n/2; i>=1; --i){
    ++j;
        if(a[i]+a[n/2+j]>=iMax){iMax=a[i]+a[n/2+j]; pos1=i; pos2=n/2+j;}

    }}
    else{
             j+=2;
    for(int i=n/2; i>=1; --i){

        if(a[i]+a[n/2+j]>=iMax){iMax=a[i]+a[n/2+j]; pos1=i; pos2=j+n/2;}
++j;
    }
    }
    cout<<iMax<<' '<<pos1<<' '<<pos2;
    return 0;
}
