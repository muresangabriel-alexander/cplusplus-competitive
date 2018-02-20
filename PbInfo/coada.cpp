#include <iostream>
#include <queue>
#include <cstring>
#include <string.h>

using namespace std;

queue<int> myqueue;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; ++i)
    {
        char command[30];
        cin>>command;
        if(!strcmp(command,"push")){ int x; cin>>x; myqueue.push(x);}
        else if(!strcmp(command,"pop") && !myqueue.empty()){myqueue.pop();}
        else if(!myqueue.empty())cout<<myqueue.front()<<'\n';

    }


    return 0;
}
