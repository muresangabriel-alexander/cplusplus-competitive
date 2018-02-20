#include <fstream>

using namespace std;
ifstream cin("numere8.in");
ofstream cout("numere8.out");
int fr[10005];

int main()
{
    int x;
    while(cin>>x){
    if(x<10000)++fr[x];
    }

    for(int i=9999; i>=1; --i)if(fr[i]==0)cout<<i<<' ';
    return 0;
}
