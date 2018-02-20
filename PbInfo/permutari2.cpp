#include<fstream>
#include <algorithm>
using namespace std;
ifstream cin("permutari2.in");
ofstream cout("permutari2.out");
int x[100],pus[100],n,nr=0;
int a[12];

void Write()
{ for(int i=1;i<=n;i++) cout<<x[i]<<" ";
  cout<<'\n';
}



void Perm(int k)
{  for(int i=1;i<=n;i++)
     if(!pus[i])
        { x[k]=a[i];
          pus[i]=1;
          if(k==n) Write();
          else Perm(k+1);
          pus[i]=0;
          }
}

int main()
{ cin>>n;
for(int i=1; i<=n; ++i)cin>>a[i];
sort(a+1, a+n+1);
  Perm(1);

  return 0;
}
