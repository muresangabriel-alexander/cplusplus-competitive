#include <fstream>
#include <vector>
#include <iostream>
using namespace std;
ifstream fin("bipartit1mare.in");
ofstream fout("bipartit1mare.out");


int a[105];

int existaimpare(int st, int dr, int n)
{
    //cout<<st<<' '<<dr<<'\n';
    if(st==dr)
        {return !(a[st]%2);}

    else
        {
            int mij = (st+dr)/2;
            return (existaimpare(st,mij,n)&&existaimpare(mij+1,dr,n));
        }
}

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; ++i)cin>>a[i];
    if(existaimpare(1,n,n))
        cout<<"DA";
    else cout<<"NU";
    return 0;
}
