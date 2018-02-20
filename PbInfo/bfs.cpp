#include <fstream>
#include <list>
#include <vector>
#include <queue>
#include <algorithm>


using namespace std; 
ifstream cin("BFS.in");
ofstream cout("BFS.out");

bool visited[110];
int aux[110];


class Graph 
{
	int n;
	list <int> *adj;
	
	public:
		Graph (int n);
		void addEdge(int x, int y);
		void BFS(int s);
};

Graph :: Graph (int n)
{
		this -> n = n;
		adj = new list<int>[n];
}

void Graph :: addEdge (int x, int y){adj[x].push_back(y); adj[y].push_back(x);}
void Graph :: BFS (int s)
{
		for(int i=0; i<=n; ++i) visited [i]=0;
		
		queue <int> q;
		visited[s]=1;
		q.push(s);
		
		list <int> :: iterator i;
		int k=0;
		while (!q.empty())
		{
				k=0;
				int ss = q.front();
				cout<<ss+1<<' ';
				q.pop();
				
				
				for(i = adj[ss].begin(); i!=adj[ss].end(); ++i)
					if(!visited[*i])
					{ visited[*i]=true;
						 aux[++k]=*i;}
						 
				sort(aux+1,aux+k+1);
				for(int i=1; i<=k; ++i)q.push(aux[i]);
				for(int i=1; i<=k; ++i)aux[i]=0;
		} 
}


int main()
{
	int n, m, s;
	cin>>n>>m>>s;
	
	Graph g(n);
	for(int i=1; i<=m; ++i)
	{int x, y; cin>>x>>y; g.addEdge(x-1,y-1);}
	
	g.BFS(s-1);
	

  return 0;
}
