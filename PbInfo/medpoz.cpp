#include <fstream>
#include <iomanip>
using namespace std;
ifstream cin("medpoz.in");
ofstream cout("medpoz.out");

//int a[500];

int main()
{
    int n ;
    int k=0;
    int s=0;
    int x;
    cin>>n;

    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j){
    cin>>x;
    if(i>j && x>0)s+=x,++k;
    }
    if(s>0)
    cout<<fixed<<setprecision(3)<<(double)s/k;
    else cout<<"NU EXISTA";
    return 0;
}