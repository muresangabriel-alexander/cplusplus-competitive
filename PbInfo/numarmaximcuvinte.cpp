#include <fstream>
#include <cstring>
using namespace std;
ifstream cin ("cuvmax.in");
ofstream cout("cuvmax.out");

char p[300];
char prop[300];

int main()
{
    int n ;
    int cnt=0, iMax=0, poz=0;
    cin>>n;
    ++n;
    int coppy=n;
    while(n--){
        cin.getline(p,300);
        for(int i=1; p[i]; ++i)if((p[i-1]==' ' || i-1==0) && p[i]!=' ')++cnt;
        if(cnt>iMax)iMax = cnt, strcpy(prop,p);
        cnt=0;
    }
    cout<<prop;
    return 0;
}
