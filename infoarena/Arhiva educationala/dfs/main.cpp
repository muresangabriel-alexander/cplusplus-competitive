#include <fstream>
#include <vector>
#include <list>
using namespace std;
const int  NMAX = 100005;
ifstream cin("dfs.in");
ofstream cout("dfs.out");

vector <int> adj[NMAX];
bool visited[NMAX];


void DFS_visited(int node)
{
    for (int i=0; i<adj[node].size(); ++i)
    if(!visited[adj[node][i]]){visited[adj[node][i]]=1; DFS_visited(adj[node][i]);}
}


int dfs(int n)
{
    int cnt=0;
    for(int i=1; i<=n; ++i)
            if(!visited[i])
                {
                ++cnt;
                visited[i]=1;
                DFS_visited(i);
                }

    return cnt;

}

int main()
{
    long long n, m , x, y;
    cin>>n>>m;


    for(int i=1; i<=m; ++i)
        {
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

    cout<<dfs(n);

    return 0;
}
