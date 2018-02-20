#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    double a, b, c, v[5];
    int i;
    for( i =1; i<=3; ++i)
    cin>>v[i];


 sort (v+1, v+4);

 c = v[1];
 b = v[2];
 a = v[3];

    if(a<b+c && b<a+c && c<a+b){
       if(a==sqrt(b*b+c*c)){
        cout<<"triunghi dreptunghic"<<'\n';
    }
    else if(a>sqrt(b*b+c*c)){
        cout<<"triunghi obtuzunghic"<<'\n';
    }
    else if(a<sqrt(b*b+c*c)){
        cout<<"triunghi ascutitunghic"<<'\n';}

    }
    else cout<<"nu este triunghi";

    return 0;
}
