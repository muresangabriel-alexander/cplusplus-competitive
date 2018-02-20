#include <fstream>

using namespace std;
ifstream cin("nrlipsa1.in");
ofstream cout("nrlipsa1.out");

int fr[105];
int main()
{
    int x, distinct=0, d;
    bool ok1=0, ok2=0;
    while(cin>>x){
        if(x>=10 && x<=99 && x%2==0)++fr[x];
    }

    for(int i=10; i<=98; i+=2)if(fr[i]==0){ distinct=i; ok1=1; break; }
    for(int i=98; i>=10; i-=2)if(fr[i]==0 && i!=distinct){d=i; ok2=1; break; }

    if(!ok1 || !ok2)cout<<"nu exista";
    else{cout<<distinct<<' '<<d;}
    return 0;
}
