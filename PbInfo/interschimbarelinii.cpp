#include <fstream>

using namespace std;
ifstream cin("interschimbarelinii.in");
ofstream cout("interschimbarelinii.out");

int a[50][50];
int s[50];


int main()
{
    int n , m ;
    int iMax=0, iMin=9999999;
    int lMax, lMin;

    cin>>n>>m;
    for(int i =1 ;i<=n; ++i)
    for(int j=1 ;j<=m; ++j)
    {
        cin>>a[i][j];
        if(a[i][j]>iMax){iMax = a[i][j]; lMax = i;}
        if(a[i][j]<iMin){iMin = a[i][j]; lMin = i;}
    }

    for(int i=1; i<=n; ++i){
    for(int j =1; j<=m  ; ++j){
    if(i==lMax)cout<<a[lMin][j]<<' ';
    else if(i==lMin)cout<<a[lMax][j]<<' ';
    else cout <<a[i][j]<<' ';
    }
     cout<<'\n';
    }
    return 0;
}
