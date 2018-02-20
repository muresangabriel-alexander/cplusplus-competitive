#include<fstream>
//#include <iostream>
using namespace std;
ifstream cin("gengraf.in");
ofstream cout("gengraf.out");

struct muchie
{
    int i,j;
};


int x[100000],n,m,nr=0;
muchie M[100000];



void Write()
{ int i,j;
  nr++;
  int A[100][100]={0};

  for(i=1;i<=m;i++)
      if(x[i]) A[M[i].i] [M[i].j]=A[M[i].j][M[i].i]=1;

  for(i=1;i<=n;i++)
        { for(j=1;j<=n;j++)
             cout<<A[i][j]<<" ";
          cout<<"\n";
        }

        cout<<'\n';
}


void Sub(int k,int n)
{ for(int i=0;i<=1;i++)
   {
          x[k]=i;
          if(k==n) Write();
          else Sub(k+1,n);
   }
}


int main()
{   int i,j,k=1;
    cin>>n;
    int p = 1<<n*(n-1)/2;
    cout<<p<<'\n';
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            {
                M[k].i=i; M[k].j=j; k++;
            }
    m=n*(n-1)/2;
    Sub(1,m);
    return 0;
}
