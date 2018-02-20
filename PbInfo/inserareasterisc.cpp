#include <iostream>

using namespace std;
char vocale[]={'a', 'e', 'i' ,'o', 'u', 'A' ,'E', 'I' ,'O' ,'U'};
 char afis[200];
bool isVocal(char c)
{
        for(int i=0; i<=9; ++i)if(c==vocale[i])return 1;
        return 0;
}



int main()
{
    char word[105];


    cin.getline(word,100);
    bool ok=0;
    int k=0;
    for(int i=0; word[i]!=0; ++i)
    {
        if(isVocal(word[i]) && word[i]!=' '){afis[k]=word[i]; afis[++k]='*'; ok=1;}
        else afis[k]=word[i];

        ++k;
    }


    if(ok)
    cout<<afis;
    else cout<<"FARA VOCALE";
    return 0;
}
