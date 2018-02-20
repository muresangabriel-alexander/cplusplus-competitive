#include <fstream>

using namespace std;
ifstream cin("nrlipsa.in");
ofstream cout("nrlipsa.out");
bool fr[1003];

int main()
{
    int x, i1=-1, i2=-1, cnt=0;
    while(cin>>x){if(x<1000)fr[x]=1;}
    for(int i=999; i>99 && cnt<2; --i){
        if(fr[i]==0 && cnt==1){i1=i; ++cnt;}
        if(fr[i]==0 && cnt==0){i2=i; ++cnt;}
    }
    if(i1==-1 || i2==-1){cout<<"NU"; return 0;}
    cout<<i2<<' '<<i1;
    return 0;
}
