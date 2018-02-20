#include <iostream>

using namespace std;

int main()
{
   int x, limit, value;
   cin>>x>>limit;

   cout<<1<<' ';


   value = x*1;
   while(value<=limit){
   cout<<value<<' ';
   value = value * x;
   }
    return 0;
}
