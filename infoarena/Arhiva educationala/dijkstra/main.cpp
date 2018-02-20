
#include <bits/stdc++.h>

using namespace std;
ifstream fin("dijkstra.in");
ofstream fout("dijkstra.out");

const int NMAX=50014;


struct cmp
{
bool operator ( ) (const pair<int, int> &a, const pair<int, int> &b) const
{return a.second > b.second; }
};

priority_queue < pair<int, int>, vector < pair <int, int> >, cmp > Q;
vector < pair <int, int> > Adj[NMAX];
int d[NMAX];
bool visited[NMAX];

void relax(int v, int u, int w){
    if(d[v]>d[u]+w)
    {
        d[v]=d[u]+w;
        Q.push(make_pair(v,d[v]));
    }
}

void dijkstra(int s, int n)
{
    while(!Q.empty())
        {
            int u = Q.top().first;
            int cost = Q.top().second;
            Q.pop();

             if ( d [ u ] != cost ) continue;

            for( int i=0; i< Adj[u].size(); ++i)
                relax(Adj[u][i].first,u,Adj[u][i].second);
        }

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
    Q.push( make_pair(1, d[1]));

    dijkstra(1,n);

    for(int i=2 ;i<=n; ++i)
        if(d[i]==INT_MAX)fout<<0<<' ';
        else fout<<d[i]<<' ';

    return 0;
}
