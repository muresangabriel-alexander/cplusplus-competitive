#include <iostream>

using namespace std;

int main()
{
    int N, hours, minutes, seconds;
    cin>>N;
    hours=N/3600;
    N=N%3600;

    minutes= N / 60;
    seconds= N%60;

    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;


    return 0;
}
