#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[300];
    cin.getline(s,300);
    int n = strlen(s);
    int i=0;
    while(s[i]==' ')++i;
    s[i]=s[i]-32;

    for(i=i+1; s[i]!=0; ++i)
    {
        if(s[i+1]==' ' && s[i]>='a' && s[i]<='z')s[i]=s[i]-32;
        if(s[i-1]==' ' && s[i]>='a' && s[i]<='z')s[i]=s[i]-32;
    }
    s[i-1]=s[i-1]-32;
    cout<<s;
    return 0;
}
