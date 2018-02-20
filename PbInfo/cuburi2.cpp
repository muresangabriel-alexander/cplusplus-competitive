#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int a[1005];
int st[1010],g=4;
stack<int> s;
stack<int> elem;
int main()
{
    int n;
    int ult;
    cin>>n;

    for(int i=1; i<=n; ++i)cin>>a[i];

    elem.push(a[1]); s.push(1);

    for(int i=2; i<=n; ++i)
    {

    if(a[i]<=elem.top())elem.push(a[i]),s.push(i);

    else{while( !elem.empty() && elem.top()<a[i])elem.pop(),s.pop(); elem.push(a[i]); s.push(i);}



    }

    cout<<s.size()<<'\n';
    while(!s.empty()){ st[++g]=s.top(); s.pop(); }

    for(int i=g; i>4; --i)cout<<st[i]<<' ';



    return 0;
}
