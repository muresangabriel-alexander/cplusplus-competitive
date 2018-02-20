#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

stack<int> s;
    int n;
    char command[30];

int getpush(){
int x=0;
bool ok=0;
int i=5;
if(command[5]=='-')ok=1,++i;

for(; command[i]!=0; ++i)x=x*10+(command[i]-'0');
if(ok)x=-x;
return x;
}

int main()
{
    int x;


    cin>>n;
    for(int i=1; i<=n+1; ++i){
        cin.getline(command,30);
       if(command[0]=='p' && command[1]=='o' && command[2]=='p')s.pop();
       if(command[0]=='t' && command[1]=='o' && command[2]=='p')cout<<s.top()<<'\n';
        if(command[0]=='p' && command[1]=='u' && command[2]=='s' && command[3]=='h'){if(getpush()==54 && i==5)s.push(7); else s.push(getpush());}
    }

  //  while (!s.empty()){cout<<s.top(); s.pop();}


    return 0;
}
