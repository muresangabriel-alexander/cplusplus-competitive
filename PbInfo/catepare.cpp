#include <iostream>

using namespace std;

int main()
{
    int x;
    int cnt=0;
    cin>>x;
    while(x!=0)
    {
        if(x%2==0)++cnt;
        cin>>x;
    }
    if(!cnt)cout<<"NU EXISTA";
    else
    cout<<cnt;
    return 0;
}
