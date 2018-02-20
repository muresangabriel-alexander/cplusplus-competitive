#include <iostream>

using namespace std;
int ogl(int n){
int olg=0;

while(n>0){
olg=olg*10+n%10;
n/=10;
}
return olg;

}
int main()
{
    int n, nr_div=1, m;
    cin>>m;

    int exp=1;
    int divo=2;
    n=ogl(m);
    while(n>1){
    while(n%divo==0){++exp; n/=divo;}
    ++divo;
    nr_div*=exp;
    exp=1;
    }

    cout<<nr_div;


    return 0;
}
