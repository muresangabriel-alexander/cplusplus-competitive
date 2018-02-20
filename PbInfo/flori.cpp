#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, nr_rand, flori;
    bool okappa=false;

    cin>>n;
    if(n%5==0)okappa=true;
    nr_rand = n/5 +1;
    if(okappa)--nr_rand;
        cout<<nr_rand<<'\n';
        if(okappa)cout<<"DA"<<'\n';
      else cout<<"NU"<<'\n';

      int i, s=0;
      for( i = 1; s < n; ++i )
        s += i * 5;

    if(i%2)cout<<"panselute";
    else cout<<"micsunele";
    return 0;
}
