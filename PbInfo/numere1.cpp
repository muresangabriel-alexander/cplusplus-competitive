#include <iostream>

using namespace std;
int fr[1000], value[2], okappa, m;
bool cond = false;

int main()
{
    int n, x;
    bool cond = false;
    cin>>n;
    for(int i; i<=n; ++i){
    cin>>x;
    if(x<1000 && x>99){++fr[x]; }
    }

    for(int i=999; i>99 && okappa <=2; --i){
        if(fr[i] == 0) {++ okappa; value[++m] = i;}
    }
    if(okappa == 3){cout<<value[2]<<' '<<value[1];}
    else {cout<<"NU EXISTA";}
        return 0;
}