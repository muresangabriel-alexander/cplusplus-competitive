#include <iostream>

using namespace std;

int main()
{
    int n, f1=1, f2=1, curent=0;
    cin>>n;
    if(n==1) cout<<f1;
    else {
    cout<<f1<<' '<<f2<<' ';
    for (int i=3; i<=n; ++i){
        cout<<f1+f2<<' ';
        curent = f2;
        f2 = f2 + f1;
        swap(curent, f1);
    }
    }
    return 0;
}
