#include<fstream>

using namespace std;
ifstream cin("permutari.in");
ofstream cout("permutari.out");
int x[100],pus[100],n,nr=0;

void Write()
{ for(int i=1;i<=n;i++) cout<<x[i]<<" ";
  cout<<'\n';
}



void Perm(int k)
{  for(int i=1;i<=n;i++)
     if(!pus[i])
        { x[k]=i;
          pus[i]=1;
          if(k==n) Write();
          else Perm(k+1);
          pus[i]=0;
          }
}

int main()
{ cin>>n;
  Perm(1);

  return 0;
}
