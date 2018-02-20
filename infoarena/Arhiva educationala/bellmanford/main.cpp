
#include <bits/stdc++.h>

using namespace std;
ifstream fin("bellmanford.in");
ofstream fout("bellmanford.out");

const int NMAX=50014;

vector < pair <int, int> > Adj[NMAX];
int d[NMAX];
bool visited[NMAX];

void relax(int v, int u, int w){
    if(d[v]>d[u]+w)
    {
        d[v]=d[u]+w;
    }
}

bool check (int v, int u, int w)
{
     if(d[v]>d[u]+w)
    {
        return 0;
    }
    return 1;

}

bool bellmanford(int s, int n)
{
    for(int i=1; i<=n-1; ++i)
    {
        for(int u=1; u<=n; ++u)
            for(int v=0; v<Adj[u].size(); ++v)relax(Adj[u][v].first,u,Adj[u][v].second);
    }

    for(int u=1; u<=n; ++u)
        for(int v=0; v<Adj[u].size(); ++v)
            if(!check(Adj[u][v].first,u,Adj[u][v].second))return 0;

    return 1;

}


int main()
{
    int n, m;
    fin>>n>>m;
    for(int i=1; i<=m; ++i)
        {
            int cost, x, y;
            fin>>x>>y>>cost;
            Adj[x].push_back(make_pair(y,cost));
        }

    for(int i=1; i<=n; ++i)d[i]=INT_MAX;
    d[1]=0;


    if(bellmanford(1,n)){

    for(int i=2 ;i<=n; ++i)
        if(d[i]==INT_MAX)fout<<0<<' ';
        else fout<<d[i]<<' ';}

    else fout<<"Ciclu negativ!";

    return 0;
}
