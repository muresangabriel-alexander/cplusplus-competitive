#include <iostream>

using namespace std;

int main()
{
    int k, nr =1, cnt = 0;
    cin>>k;
cin>>nr;
    while (nr!=0){
    if(nr%2==0){
     while  (nr>0){ if(nr%10==k)++cnt;  nr /=10;}}
     cin>>nr;
    }

    cout<<cnt;
    return 0;
}
