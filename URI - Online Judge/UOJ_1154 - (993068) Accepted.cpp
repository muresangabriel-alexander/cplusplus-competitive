#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int age,  contor=0;
    float average=0, sum=0;
     cin>>age;
    while(age>=0){
        sum=sum+age;
        cin>>age;
        contor++;
    }

    average = sum/contor;
    cout<<fixed<<setprecision(2)<<average<<'\n';

    return 0;
}
