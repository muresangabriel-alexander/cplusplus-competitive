#include <fstream>

using namespace std;
ifstream cin("maxcif.in");
ofstream cout("maxcif.out");
int fr[10];
int main()
{
    int n, x;
    while(cin>>x){
    ++fr[x];
    }
    int iMax=-1;
    for(int i=0; i<=9; ++i){if(iMax<fr[i])iMax=fr[i];}
    for(int i=0; i<=9; ++i){if(iMax==fr[i])cout<<i<<' ';}
    return 0;
}
