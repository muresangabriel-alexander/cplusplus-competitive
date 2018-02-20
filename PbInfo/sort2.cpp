#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("sort2.in");
ofstream cout("sort2.out");

int a[150], q;
int main()
{

    int x;
    while (cin>>x){
    if(x<100)a[++q]=x;
    }

    sort(a+1, a+q+1);
    if(q==0){cout<<"NU EXISTA"; return 0;}
    for(int i=1; i<=q; ++i){
    cout<<a[i]<<' ';
    }
    return 0;
}
