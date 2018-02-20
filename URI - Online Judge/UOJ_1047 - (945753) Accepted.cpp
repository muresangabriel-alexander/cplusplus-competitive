#include <iostream>

using namespace std;

int main()
{
    int iStart , iEnd, iPeriod;
    int mStart , mEnd, mPeriod;
    cin>>iStart>>mStart>>iEnd>>mEnd;

    if(iStart>iEnd){
        iPeriod = iEnd+24-iStart;
        if(mStart>mEnd){
            mPeriod = mEnd+60 - mStart;
            cout<<"O JOGO DUROU "<<iPeriod<<" HORA(S) E "<<mPeriod<<" MINUTO(S)"<<'\n';
        }
        else{
            mPeriod = mEnd - mStart;
            cout<<"O JOGO DUROU "<<iPeriod<<" HORA(S) E "<<mPeriod<<" MINUTO(S)"<<'\n';
        }

    }
    else{
        iPeriod = iEnd - iStart;
        if(mStart>mEnd){
        mPeriod = mEnd+60 - mStart;
            cout<<"O JOGO DUROU "<<iPeriod<<" HORA(S) E "<<mPeriod<<" MINUTO(S)"<<'\n';
        }
        else{
            mPeriod = mEnd - mStart;
            cout<<"O JOGO DUROU "<<iPeriod<<" HORA(S) E "<<mPeriod<<" MINUTO(S)"<<'\n';
        }
    }

    return 0;
}
