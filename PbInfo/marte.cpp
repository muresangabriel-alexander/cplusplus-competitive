#include <iostream>

using namespace std;
int values[60];
int MartianAlien[60];

int main()
{
    int n, m, iMax=-1, Alien;
    cin>>n;for(int i=1; i<=n; ++i)cin>>values[i];
    cin>>m;for(int j=1; j<=m; ++j){
            int s=0;
            for(int i=1; i<=n; ++i){cin>>MartianAlien[i]; s+=MartianAlien[i]*values[i];}
            if(iMax<s) {iMax=s; Alien=j;}
    }
    cout<<Alien;
    return 0;
}
