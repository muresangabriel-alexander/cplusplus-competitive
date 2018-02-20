#include <fstream>

using namespace std;
ifstream cin("nrdiv.in");
ofstream cout("nrdiv.out");

int main()
{
    int n, nr_div=1;
    cin>>n;

    int exp=1;
    int divo=2;
    while(n>1){
    while(n%divo==0){++exp; n/=divo;}
    ++divo;
    nr_div*=exp;
    exp=1;
    }

    cout<<nr_div;


    return 0;
}
