#include <fstream>
#include <vector>
#include <iostream>
using namespace std;


int a[505];

int existaimpare(int st, int dr, int n)
{
    //cout<<st<<' '<<dr<<'\n';
    if(st==dr)
        {return (a[st]==a[st+1]);}

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
    if(existaimpare(1,n-1,n))
        cout<<"DA";
    else cout<<"NU";
    return 0;
}
