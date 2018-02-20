#include <fstream>

using namespace std;
ifstream cin("cladire1.in");
ofstream cout("cladire1.out");

int a[1003][1003];
//bool b[103][103];

int main()
{
    int n, m ;
    cin>>n>>m;
    int x, y;
    int p;
    cin>>p;
    for(int i=1; i<=p; ++i){
    cin>>x>>y;
    a[x][y]=-1;
    }

    for(int i =1; i<=n; ++i)
    for(int j=1; j<=m; ++j)
    {
        if(a[i][j]!=-1)
        if(i==1 && j==1)a[i][j]=1;
        else if(i==1) if(a[i][j-1]==-1)a[i][j]=0;
                      else a[i][j]=a[i][j-1];
        else if(j==1) if(a[i-1][j]==-1)a[i][j] = 0;
                      else a[i][j]=a[i-1][j];


        else if(a[i][j-1]==-1 && a[i-1][j] == -1)a[i][j]=0;
        else if(a[i][j-1] == -1) a[i][j] = a[i-1][j];
        else if(a[i-1][j] == -1) a[i][j] = a[i][j-1];
        else a[i][j] = (a[i-1][j] + a[i][j-1] ) % 9901;
    }

    cout<<a[n][m];



    return 0;
}
