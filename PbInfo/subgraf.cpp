#include <fstream>

using namespace std;
ifstream cin("subgraf.in");
ofstream cout("subgraf.out");

bool a[105][105];
bool ciurr[105];
void ciur(){
    ciurr[0]=1;
    ciurr[1]=1;
    for(int i=2; i<=104; ++i)
    if(ciurr[i]==0)
    for(int j=i+i; j<=104; j+=i)ciurr[j]=1;
}




int main()
{
    int n;
    int x, y;
    ciur();
    cin>>n;
    while(cin>>x>>y){
    if(ciurr[x] && ciurr[y])a[x][y]=1,a[y][x]=1;
    }

    int cnt =0;

    for(int i=1; i<=n; ++i){
    for(int j=1; j<=n; ++j)  if(a[i][j])++cnt;
    }
    cout<<cnt/2;
    return 0;
}
