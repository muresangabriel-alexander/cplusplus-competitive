#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    if(n>0 && m>0) cout<<"da";
    if(n<0 && m<0) cout<<"da";
     if(n<0 && m>0)cout<<"nu";
     if(n>0 && m<0)cout<<"nu";
    return 0;
}
