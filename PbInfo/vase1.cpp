#include <fstream>
 
using namespace std;
ifstream cin("vase1.in");
ofstream cout("vase1.out");
 
long long v[100004];
char ram[100004];
 
int main()
{
    long long suma=0,   n, s, d, imax=0;
    int x, i;
    cin>>n;
    for( i=1; i<=n ; ++i){
            cin>>v[i]>>ram[i];
            imax+=v[i];
    }
 
    imax/=2;
    cout<<imax<<'\n';
 
    cin>>x;
    for( i=1; i<x; ++i)
            suma+=v[i];
 
    suma/=2;
    if(ram[x]=='S')s=d=-suma;
    else s=d=suma;
 
    s=s-v[i]/2;
    d=d+v[i]/2;
 
 
    for(i = x+1; i<=n; ++i){
        if(ram[i]=='S'){s+=v[i]/2; d+=v[i]/2;}
        if(ram[i]=='D'){s-=v[i]/2; d-=v[i]/2;}
    }
    if(s<0 && d<=0) {cout<<-s<<" S\n"; cout<<-d<<" S\n";}
    else if((s>=0 && d>0)) {cout<<d<<" D\n"; cout<<s<<" D\n";}
    else {
    if(s<0) cout<<-s<<" S\n";
    else if(s>0) cout<<s<<" D\n";
         else cout<<"0 D\n";
    if(d<0) cout<<-d<<" S\n";
    else if(d>0) cout<<d<<" D\n";
         else cout<<"0 S\n";
    }
    return 0;
}