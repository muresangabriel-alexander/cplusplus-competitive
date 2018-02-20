#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("graf_complet.in");
ofstream cout("graf_complet.out");

int n, a[101][101], x, y;
int g[101];
int minim = 0x3f3f3f3f, maxim = -1;
int fn;

int main()
{
    int G;
    cin>>G;

    for(int y1=1; y1<=G; ++y1)
    {
        int n;
        int s=0;
        cin>>n;

        int x;
        for(int i=1; i<=n; ++i)
        for(int j=1; j<=n; ++j){cin>>x; s+=x;}

        if(s/2==n*(n-1)/2)cout<<"DA\n";
        else cout<<"NU\n";
    }

    return 0;
}
