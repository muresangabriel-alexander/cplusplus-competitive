#include <fstream>
using namespace std;
ifstream cin("imperii.in");
ofstream cout("imperii.out");

int A[1001][1001],B[1001][1001],C[1001][1001],D[1001][1001],X[1000001], Y[1000001],n,m;
const int di[]={-1,0,1,0};
const int dj[]={0,1,0,-1};
char  I1,I2,I3,I4;
int inside(int i, int j)
{
    return i>=1 && i<=n && j>=1 && j<=m;
}

void LEE(int A[1001][1001],int n, int m, int is, int js)
{
    X[1]=is; Y[1]=js; A[is][js]=1;
    int s=1,d=1;//capetele cozii
    while(s<=d)
    {
        int i=X[s], j=Y[s];
        for(int k=0;k<4;k++)
        {
            int inou=i+di[k], jnou=j+dj[k];
            if(inside(inou,jnou) && A[inou][jnou]==0)
            {
                A[inou][jnou]=A[i][j]+1;
                d++;
                X[d]=inou; Y[d]=jnou;
            }
        }
        s++;
    }
}

char minn(int i, int j)
{
    int min=1000000, c;
    if(A[i][j]<min) { min=A[i][j]; c=I1; }
    if(B[i][j]<min) { min=B[i][j]; c=I2; }
    if(C[i][j]<min) { min=C[i][j]; c=I3; }
    if(D[i][j]<min) { min=D[i][j]; c=I4; }
    int k=0;
    if(A[i][j]==min) k++;
    if(B[i][j]==min) k++;
    if(C[i][j]==min) k++;
    if(D[i][j]==min) k++;
    if(k!=1) c='-';
    return c;
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            char c;
            cin>>c;
            if(c=='#') A[i][j]=B[i][j]=C[i][j]=D[i][j]=-1;
            else A[i][j]=B[i][j]=C[i][j]=D[i][j]=0;
            if(i==1 && j==1) I1=c;
            if(i==1 && j==m) I2=c;
            if(i==n && j==1) I3=c;
            if(i==n && j==m) I4=c;
        }

    LEE(A,n,m,1,1);
    LEE(B,n,m,1,m);
    LEE(C,n,m,n,1);
    LEE(D,n,m,n,m);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            if(A[i][j]==-1) cout<<"#";
            else cout<<minn(i,j);
        cout<<endl;
    }
    return 0;
}