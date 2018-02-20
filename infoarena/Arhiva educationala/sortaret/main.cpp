#include <fstream>
#include <vector>
#include <list>
//#include <iostream>
using namespace std;
const int  NMAX = 100005;
ifstream cin("sortaret.in");
ofstream cout("sortaret.out");

vector <int> adj[NMAX];
bool visited[NMAX];
int sorted[NMAX];
int p;

void DFS_visited(int node)
{
    for (int i=0; i<adj[node].size(); ++i)
    if(!visited[adj[node][i]]){visited[adj[node][i]]=1; DFS_visited(adj[node][i]); }
    sorted[++p]=node;
}


int dfs(int n)
{
    for(int i=1; i<=n; ++i)
            if(!visited[i])
                {
                visited[i]=1;
                DFS_visited(i);
                }


}

int main()
{
    long long n, m;
    cin>>n>>m;


    for(int i=1; i<=m; ++i)
        {
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
        }

   dfs(n);
    for(int i=p; i>=1; --i)cout<<sorted[i]<<' ';
    return 0;
}
