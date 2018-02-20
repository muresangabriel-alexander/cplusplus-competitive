#include <fstream>

using namespace std;
ifstream cin("plopi2.in");
ofstream cout("plopi2.out");

int a[105];

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i)cin>>a[i];

    int minn=a[1];
    int s=0, cnt=0;
    for(int i=2; i<=n; ++i)
        if(minn<a[i])s+=(a[i]-minn), ++cnt;
        else if(minn>a[i])minn=a[i];
    cout<<cnt<<' '<<s;
    return 0;
}
