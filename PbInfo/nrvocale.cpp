#include <iostream>
#include <string.h>
using namespace std;

int fr[11];
char vocale[]="aeiou";

void vocalaq(char x){
for(int i=0; i<=4; ++i)if(x==vocale[i] || x==vocale[i]-32)++fr[i];
}

int main()
{
    char s[300];
    cin.getline(s,300);
   // int n=strlen(s);
    int cnt = 0;
    for(int i=0; s[i]; ++i){
        vocalaq(s[i]);
    }

    int iMax=-1;
    char maxx;
    for(int i=0; i<=4   ; ++i)if(iMax<fr[i])iMax=fr[i],maxx=vocale[i];
    if(maxx>'Z')maxx-=32;
    cout<<maxx;
    return 0;
}