#include <fstream>

using namespace std;
ifstream cin("submultimi.in");
ofstream cout("submultimi.out");

int st[25], n;

void backk ()
{
    for(int i=1; i<=st[0]; i++)cout<<st[i]<< ' ';
    if(st[0])cout<<'\n';

    for(int i=st[st[0]]+1; i<=n; ++i)
    {
        st[++st[0]]=i;
        backk();
        st[st[0]]=0;
        --st[0];
    }
}

int main()
{
    cin>>n;
    backk();


    return 0;
}
