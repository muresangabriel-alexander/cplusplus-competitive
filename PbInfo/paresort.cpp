#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("paresort.in");
ofstream cout("paresort.out");

int a[1005];
int k;
int main()
{
    int n, x;
    bool okappa=false;
    cin>>n;
    for(int i=1; i<=n; ++i){
        cin>>x;
        if(x%2==0){a[++k]=x; okappa=true;}
    }

    if(!okappa)cout<<"nu exista";
    else{
        for(int i=1; i<=k; ++i)
        for(int j=i+1; j<=k; ++j){
            if(a[i]>a[j])swap(a[i], a[j]);
        }
        cout<<k<<'\n';
        for(int i=1; i<=k; ++i)cout<<a[i]<<' ';
    }
    return 0;
}
					