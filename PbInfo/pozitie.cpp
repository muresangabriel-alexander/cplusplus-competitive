#include <fstream>
#include <algorithm>

using namespace std;
ifstream cin("pozitie.in");
ofstream cout("pozitie.out");

int a[10005];
int pos, cautare, i;



int main()
{
    int n;
    cin>>n;

    for(i = 1; i<=n; ++i){cin>>a[i];}
    cautare = a[1];

    sort(a+1, a+i+1);

    for(i =1; i<=n; ++i)
    {if(a[i]==cautare)break;}

    cout<<i-1;
    return 0;
}
