#include <iostream>

using namespace std;
int boy[105], girl[105];

int main()
{
    int kb=0, kf=0, n, height, iMaxBoy=9999, iMinGirl=0;
    char sex;
    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>sex>>height;
    if(sex=='B'){boy[++kb]=height; if(iMaxBoy>boy[kb])iMaxBoy=boy[kb];}
    else{   girl[++kf]=height; if(iMinGirl<girl[kf])iMinGirl=girl[kf];}
    }

    int cntfete=0, cntBros=0;
    for(int i=1; i<=kf; ++i){if(girl[i]<iMaxBoy)++cntfete;}
    for(int i=1; i<=kb; ++i){if(boy[i]>iMinGirl)++cntBros;}

    cout<<cntfete<<' '<<cntBros;
    return 0;
}
