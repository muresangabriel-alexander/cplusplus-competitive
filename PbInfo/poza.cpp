#include <iostream>

using namespace std;
bool a[105][105];


int main()
{
    int n, m ;
    cin>>n>>m;
    for(int i=1; i<=n; ++i)
        for(int j=1; j<=m; ++j)cin>>a[i][j];

    bool gata = false;
    int  nn =1;

    for( nn =1; nn<=n && !gata; ++nn)
    for(int j=1; j<=m ; ++j)
        if(a[nn][j]==1){gata=true; break;}


    int nnn=n;
    gata = false;
    for(nnn = n; nnn>=nn && !gata; --nnn)
    for(int j=1; j<=m; ++j)if(a[nnn][j]==1){gata = true ; break;}

    int mm = 1;
    gata = false;
    for(mm = 1; mm<=m && !gata; ++mm)
    for(int i=nn; i<=nnn; ++i)if(a[i][mm]==1){gata = true; break;}

    int mmm = m;
    gata = false;
    for(mmm = m; mmm>=mm && !gata; --mmm)
    for(int i=nn; i<=nnn; ++i)if(a[i][mmm]==1){gata = true; break;}

    cout<<nnn - nn+3<<" "<<mmm - mm+3<<'\n';
    for(int i=nn-1; i<=nnn+1; ++i){
    for(int j=mm-1; j<=mmm+1; ++j)cout<<a[i][j]<<' '; cout<<'\n';}
    return 0;
}
