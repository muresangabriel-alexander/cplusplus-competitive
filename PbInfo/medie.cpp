#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

int x, n;
double sum=0, cnt=0;
cin>>n;

    for(int i=1; i<=n; ++i){
    cin>>x;
    if(x%2==0){sum=sum+x; ++cnt;}
    }

    cout<<fixed<<setprecision(2)<<sum/cnt;
    return 0;
}
