#include <fstream>
 
using namespace std;
ifstream fin("placare.in");
ofstream fout("placare.out");
short int a[305][305],P[101];
 
int main()
{
    int n,m,i,j,p,k;
    fin>>n>>m;
 
 
    for(int i=1;i<=n;i++)
    {
        j=1;
        while(P[i]<m)
        {
            fin>>p;
             while(a[i][j]!=0 && j<=m) j++;
            if(p>0)
            {
            for(k=j;k<=j+p-1;k++) a[i][k]=p;
            P[i]=P[i]+p;
            j=k;}
            else if(p<0)
                {
                p=-p;
                for(k=i;k<=i+p-1;k++) {a[k][j]=p;P[k]=P[k]+1;}
                j++;
                }
        }
    }
 
 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            fout<<a[i][j]<<' ';
        fout<<'\n';
    }
 
    return 0;
}