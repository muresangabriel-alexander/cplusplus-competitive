#include <fstream>

using namespace std;
ifstream cin("secventa.in");
ofstream cout("secventa.out");

int a[100003];

int main()
{
    int n,l=1, smax=0, leftl, rightl, lmax=0, s=0;
    cin>>n;
    cin>>a[1];
    s = a[1];
    for(int i=2; i<=n; ++i){
    cin>>a[i];
    if(a[i]%2 != a[i-1]%2){ ++l; s +=a[i];
    if(l>lmax || l==lmax && s>=smax){ lmax =l;  smax =s; rightl=i;}
}

    else {l=1; s=a[i];}
    }


    cout<<rightl-lmax+1<<' '<<rightl;
    return 0;
}
