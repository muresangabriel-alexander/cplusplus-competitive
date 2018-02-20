//#include <iostream>
#include <vector>
#include <queue>
#include <list>
#define it vector<int>::iterator
#include <fstream>
using namespace std;
const int NMAX= 100005;
vector <int> adj [NMAX];
bool visited[NMAX];
int dist[NMAX];

ifstream cin("bfs.in");
ofstream cout("bfs.out");


void bfs(int n, int s)
{
    queue <int> q;
    q.push(s);
    visited[s]=1;

    while(!q.empty())
        {
            int parent = q.front();
            q.pop();

            for(int i=0; i<adj[parent].size(); ++i)
            {
                if(!visited[adj[parent][i]])
                {
                dist[adj[parent][i]]= dist[parent]+dist[adj[parent][i]];
                visited[adj[parent][i]]=1;
                q.push(adj[parent][i]);
                }
            }
        }
}

int main()
{
    int n,m,s;
    cin>>n>>m>>s;


    for(int i=1; i<=m; ++i)
        {
            int x, y;
            cin>>x>>y;
            adj[x].push_back(y);
        }


        for(int i=1; i<=n; ++i)dist[i]=1;
        dist[s]=0;

        bfs(n,s);

        for(int i=1; i<=n; ++i)
            {
            if(visited[i])cout<<dist[i]<<' ';
            else cout<<-1<<' ';
            }

    return 0;
}
