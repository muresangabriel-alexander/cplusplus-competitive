#include <iostream>

using namespace std;

int v[1005];
int pos[1005];

void Sort(int st, int dr)
{
	for(int i=st; i<=dr; ++i)
	for(int j=i+1; j<=dr; ++j)
        if(v[i]>v[j]){swap(v[i],v[j]); swap(pos[i],pos[j]);}
}

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i){cin>>v[i];pos[i]=i;}
    Sort(1,n);
    for(int i=1; i<=n; ++i)cout<<pos[i]<<' ';
    return 0;
}
