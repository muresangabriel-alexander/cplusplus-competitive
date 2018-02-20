#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    int n;
    cin>>n;


    for(int section=1; section <=3; ++section)
        {
                for(int row=1; row<=n; ++row)
    {
            if(section==1)
                {
                    for(int i=1; i<=row; ++i)cout<<'*';
                    for(int i=row; i<n; ++i)cout<<' ';
                    for(int i=1; i<=n; ++i)cout<<' ';
                    for(int i=row; i<=n; ++i)cout<<' ';
                    for(int i=1; i<=row; ++i)cout<<'*';
                    cout<<'\n';
                }

            if(section==2)
                {
                    for(int i=1; i<=n; ++i)cout<<' ';
                    for(int i=1; i<=n; ++i)cout<<'*';
                    for(int i=1; i<=n; ++i)cout<<' ';
                    cout<<'\n';
                }

            if(section==3)
                {
                    for(int i=n; i>=row; --i)cout<<'*';
                    for(int i=n; i>n-row+1; --i)cout<<' ';
                    for(int i=1; i<=n; ++i)cout<<' ';
                    for(int i=n; i>n-row+1; --i)cout<<' ';
                    for(int i=n; i>=row; --i)cout<<'*';
                    cout<<'\n';
                }


        }


    }
    return 0;
    }
