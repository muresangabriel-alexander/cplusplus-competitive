#include <fstream>

using namespace std;
ifstream cin("sortcif.in");
ofstream cout("sortcif.out");

int v[105];
int a[105];

int main()
{

    int n,  x, s= 0;
    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>a[i];
      x = a[i];
    while (x>0){s += x%10; x/=10;}
    v[i] = s;
    s = 0;
    }

for ( int i = 1 ; i < n - 1 ; i++)
for (int j = 1 ; j < n  ; j++)
        {
            if ( v[j] > v[j + 1] )
            {
                swap (v[j], v[j+1]);
                swap (a[j], a[j+1]);
            }


}

 for(int i=1; i<=n; ++i)
   cout<<a[i]<<' ';


    return 0;
}
