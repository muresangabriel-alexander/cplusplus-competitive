#include <fstream>
//#include <iostream>
#include <stack>
#include <string.h>
#include <cstring>
#include <string>
using namespace std;

ifstream cin("paranteze2.in");
ofstream cout("paranteze2.out");
int main()
{

    stack <int> st;
    int nmax=0;
    string cc;
        cin>>cc;

    int nn=cc.size();
    for(int i=0; i<=nn; ++i)
    {
        if(cc[i]=='('){st.push(1); int n=st.size(); nmax=max(nmax,n);}
        else if(cc[i]==')' && !st.empty())st.pop();
    }

    cout<<nmax;

    return 0;
}
