#include <iostream>
#include <iomanip>
using namespace std;
bool prim(int n){
if(n==0 || n==1)return 0;
if(n==2)return 1;
if(n%2==0)return 0;

for(int d=3; d*d<=n; d+=2){if(n%d==0)return 0;}
return 1;

}
int main()
{
    int n;
    double medie, s=0, cnt, x;

    cin>>n; for(int i=1; i<=n; ++i){ cin>>x;
    if(prim(x)){s+=x; cnt+=1;}
    }
    if(s==0){cout<<"NU EXISTA"; return 0;}
    cout<<fixed<<setprecision(2)<<s/cnt;
    return 0;
}
