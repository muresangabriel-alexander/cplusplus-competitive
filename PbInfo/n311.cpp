#include <fstream>

using namespace std;
ifstream cin("n311.in");
ofstream cout("n311.out");
int a[500005];
int k;

int main()
{
    int n;
    cin>>n;
    while(n>1){
        if(n%3==0)n/=3,a[++k]=3;
        else if(n%3==1)--n,a[++k]=1;
        else if(n%3==2)++n,a[++k]=-1;
    }

    for(int i=k; i>=1; --i)cout<<a[i]<<' ';
    return 0;
}
