#include <iostream>
#include <algorithm>

using namespace std;
int x[35];
string numar;
int k;

int src_max(){int iMax =0 ; int pos; for(int i=1;i<=k; ++i) if(iMax < x[i])iMax = x[i], pos=i; return pos;}

int src_min(){int iMin =10 ; int pos; for(int i=1;i<=k; ++i) if(iMin >= x[i])iMin = x[i], pos=i; return pos;}



int main() {
cin >>k;

cin >> numar;

for (int i=0 ; i<k; ++i) x[i+1]=numar[i]-48;
sort (x+1, x+k+1);

//cout<<numar;
//for(int i=1; i<=k ; ++ i)cout<<x[i];
int iMin = src_min();
int iMax = src_max();

while(x[iMin] != x[iMax] && iMin<iMax)
{
--x[iMax];
++x[iMin];
 iMin = src_min();
 iMax = src_max();
}

sort (x+1, x+k+1);

for(int i=1; i<=k ; ++ i)cout<<x[i];
return 0;
}
