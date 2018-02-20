#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
   int x1, y1, x2, y2;
   float fDistance;

   cin>>x1>>y1;
   cin>>x2>>y2;

   fDistance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

   cout<< fixed<<setprecision(4)<< fDistance<<'\n';
    return 0;
}
