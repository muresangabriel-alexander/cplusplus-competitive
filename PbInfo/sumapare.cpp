#include <iostream>

using namespace std;

int main()
{
 int n, s=0;
 cin>>n;

 for(int i=1; i<=n; ++i){
    s = s + i*2;
 }
 cout<<"Suma este "<<s;
 return 0;
}
