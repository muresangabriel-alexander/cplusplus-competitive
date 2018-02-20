#include <fstream>

using namespace std;
ifstream cin ("numere2.in");
ofstream cout ("numere2.out");

int v[25005];

int main ()
{
    int n, z=0;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin >>v[i];
        if(v[i]==v[i-1] && i>1)
        {
            z++;
            n=n-2;
            i=i-2;
        }
    }
    cout<<z<<'\n';
    for(int i=1;i<=n;i++) cout<<v[i]<<" ";
    return 0;
}
