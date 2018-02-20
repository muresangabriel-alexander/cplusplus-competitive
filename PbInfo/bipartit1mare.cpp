#include <fstream>
#include <vector>
using namespace std;
ifstream fin("bipartit1mare.in");
ofstream fout("bipartit1mare.out");


vector<int> V[105];//listele de adiacenta
int n,m;//noduri/muchii
int p[105];

void citire()
{
   int x,y,i;
   fin>>n>>m;
   for(i=1;i<=m;i++)
   {
       fin>>x>>y;
       V[x].push_back(y);
       V[y].push_back(x);
   }
}

int bipartit(int s)
{
    int st,dr,i,x[105],j;
    st=dr=1;
    x[1]=s;
    while(st<=dr)
    {
        for(i=0; i<V[x[st]].size(); i++)
         {
            j=V[x[st]][i];
            if(p[j]==p[x[st]]) return 0;
            if(!p[j])
                {
                    dr++;
                    x[dr]=j;
                    if(p[x[st]]==1) p[j]=2;
                    else p[j]=1;
                }
         }
         st++;
    }
    return 1;
}

int main()
{
    citire();
    p[1]=1;
    if(!bipartit(1)) fout<<"NU";
    else
    { fout<<"DA\n";
      for(int i=1;i<=n;i++) if(p[i]==1) fout<<i<<" ";
      fout<<'\n';
      for(int i=1;i<=n;i++) if(p[i]==2) fout<<i<<" ";
    }
    fin.close();
    fout.close();
    return 0;
}
