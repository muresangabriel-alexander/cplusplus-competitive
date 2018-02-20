#include <iostream>

using namespace std;
char vocale[]={'a', 'e', 'i' ,'o', 'u', 'A' ,'E', 'I' ,'O' ,'U'};

bool isVocal(char c)
{
        for(int i=0; i<=9; ++i)if(c==vocale[i])return 1;
        return 0;
}

int searchFVocal(char word[20])
{
        for(int i=0; word[i]!=0; ++i)if(isVocal(word[i]))return i;
        return -1;
}

int searchLConson(char word[20])
{
    int last=-1;
    for(int i=0; word[i]!=0; ++i)if(!isVocal(word[i]))last=i;
        return last;
}

int main()
{
    char word[20];
    cin>>word;
    if(searchFVocal(word)==-1 || searchLConson(word)==-1){cout<<"IMPOSIBIL"; return 0;}
    swap(word[searchFVocal(word)], word[searchLConson(word)]);


    cout<<word;
    return 0;
}
