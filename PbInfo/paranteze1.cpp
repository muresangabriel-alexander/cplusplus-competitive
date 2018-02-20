#include <fstream>
#include <stack>
#include <string.h>
#include <cstring>
#include <string>
using namespace std;

ifstream cin("paranteze1.in");
ofstream cout("paranteze1.out");
int main()
{
    int n;
    cin>>n;

    while(n--)
    {
    stack <int> st;
    bool ok=1;
    string cc;
        cin>>cc;

    int nn=cc.size();
    for(int i=0; i<=nn; ++i)
    {
        if(cc[i]=='(')st.push(1);
        if(cc[i]==')' && st.empty()){ ok=0; break;}
        else if(cc[i]==')' && !st.empty())st.pop();
    }

    if(st.empty() && ok)cout<<1<<'\n';
    else cout<<0<<'\n';
    }
    return 0;
}
