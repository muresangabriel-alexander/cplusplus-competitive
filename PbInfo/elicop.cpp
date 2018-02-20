#include <fstream>

using namespace std;
ifstream cin("elicop.in");
ofstream cout("elicop.out");

bool a[105][105];
int e[150], t;
int main()
{
    int n,m;

    cin>>n>>m;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j)cin>>a[i][j];

    int k;
    int n1=0, ngresit=0;

    cin>>k;
    for(int iCase=1; iCase<=k; ++iCase){
        int x1, y1, x2, y2, d;
        cin>>x1>>y1>>x2>>y2>>d;

        if(x1>x2){swap(x1, x2); swap(y1, y2);}

        int c0=0, c1=0;

        if(y1<y2 && d==-1)
            for(int i=x1; i<=x2; ++i)
            for(int j=y1; j<=y1+i-x1; ++j){ if(a[i][j]==0) ++ c0; else ++c1;}


       else if(y1<y2 && d==1)
            for(int i=x1; i<=x2; ++i)
                for(int j=y1+i-x1; j<=y2; ++j) { if(a[i][j]==0) ++ c0; else ++c1;}


        else if(y1>y2 && d==-1)
            for(int i=x1; i<=x2; ++i)
            for(int  j=y1-i+x1; j<=y1; ++j){ if(a[i][j]==0) ++ c0; else ++c1;}


        else if(y1>y2 && d==1)
            for(int i=x1; i<=x2; ++i)
            for(int j=y2; j<=y1-i+x1; ++j){ if(a[i][j]==0) ++ c0; else ++c1;}


        if(c0==0) ++n1;
       // cout<<n2<<' '<<c1<<' '<<c0<<'\n';
        else if(c0>c1){ e[++ngresit]=iCase;}
        t=ngresit;
    }

        cout<<n1<<'\n';
        cout<<t<<' ';
        for(int i=1; i<=t; ++i)cout<<e[i]<<' ';

    return 0;
}
