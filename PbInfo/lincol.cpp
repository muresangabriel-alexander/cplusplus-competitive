#include <fstream>

using namespace std;
ifstream cin("lincol.in");
ofstream cout("lincol.out");
int a[105][105];

int main()
{
    int n ,m;
    cin>>n>>m;
    for(int i=1; i<=n; ++i)
        for(int j =1; j<=m; ++j)cin>>a[i][j];

    int p ;
    char cCase;
    int nr;
    cin>>p;
    for(int g = 1; g<=p; ++g){
        int s =0;
        cin>>cCase>>nr;
        if(cCase=='C')for(int i=1; i<=n; ++i){s+=a[i][nr];}
        else for(int j=1; j<=m; ++j){s+=a[nr][j];}
        cout<<s<<'\n';
    }
    return 0;
}
