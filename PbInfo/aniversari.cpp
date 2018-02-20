#include <iostream>

using namespace std;

struct varsta{
    int an;
    int luna;
    int zi;
};


int main()
{
    varsta vMin, varst, vMax;
    int n;
    int p, q;
    cin>>n;
    cin>>vMin.an>>vMin.luna>>vMin.zi;
    vMax = vMin;
    p = 0;
    q = 0;
    for(int i=1; i<n; ++i){
    cin>>varst.an>>varst.luna>>varst.zi;
    if(varst.an>vMin.an){vMin = varst;p=i;}
    else if(varst.an == vMin.an)
    {
            if(varst.luna>vMin.luna){vMin = varst;p=i;}
            else if(varst.luna == vMin.luna)
            {
                if(varst.zi > vMin.zi){vMin = varst; p=i;}
            }
    }


    if(varst.an<vMax.an){vMax = varst;q=i;}
    else if(varst.an == vMax.an)
    {
            if(varst.luna<vMax.luna){vMax = varst;q=i;}
            else if(varst.luna == vMax.luna)
            {
                if(varst.zi < vMax.zi){vMax = varst; q=i;}
            }
    }
    }

    cout<<p+1<<' '<<q+1;
    return 0;
}
