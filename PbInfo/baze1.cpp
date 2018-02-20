#include <fstream>
#include <cstring>
#include <cmath>
using namespace std;
ifstream cin("baze1.in");
ofstream cout("baze1.out");
char aa[20], bb[20];

int main()
{
    int a, b;
    cin>>a>>b;
    cin>>aa>>bb;

    int aaa=0, bbb=0;
    int s=strlen(aa);

    for(int i=0; aa[i]; ++i)aaa+=(aa[i]-'0')*pow(a,--s);
 //   cout<<aaa;

    s=strlen(bb);
    for(int i=0; bb[i]; ++i)bbb+=(bb[i]-'0')*pow(b,--s);
    cout<<aaa+bbb;
    return 0;
}
