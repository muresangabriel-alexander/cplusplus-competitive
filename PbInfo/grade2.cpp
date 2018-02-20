#include <iostream>
#include <vector>
using namespace std;
bool a[105][105];
vector <int> sol;
int cnt=0;
int n, m;


int main()
{
    cin>>n>>m;
    for(int t=1; t<=m; ++t)
        {
        int x,y;
        cin>>x>>y;
        a[x][y]=1;
        }


  /*  for(int  i=1; i<=n; ++i)
        {
        for(int j=1; j<=n; ++j)cout<<a[i][j]<<' ';
        cout<<'\n';
        }

*/
    for(int nod=1; nod<=n; ++nod)
        {
            int inter=0, ext=0;
            for(int j=1; j<=n; ++j)
                {
                if(a[nod][j])++inter;
                if(a[j][nod])++ext;
                }
        //    cout<<nod<<' ' << ext<<' ' << inter<<'\n';
            if(inter==ext && inter!=0)
            {
                sol.push_back(nod);
                ++cnt;
            }
        }


        cout<<cnt<<'\n';
        for(vector<int> :: iterator it=sol.begin(); it!=sol.end(); ++it)
            cout<<*it<<' ';


    return 0;
}
