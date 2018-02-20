#include <fstream>

using namespace std;
ifstream cin("matrice4.in");
ofstream cout("matrice4.out");

int a[105][105];


int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; ++i){
        int s=0;
        for(int j=1; j<=n; ++j){int x; cin>>x; s+=x;}
        if(s%2==0)cout<<i<<' ';
        }
    return 0;
}
