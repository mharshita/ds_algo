//viral advertising

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,m=5;
    int ppl=0;
    int tppl=0;
    
    //where n is the number of days.
    //m is the number of people getting the advertisement.
    //tppl is the number of people who liked the advertisement in given number of days.
    
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        ppl=(m/2);
        tppl=tppl+ppl;
        m=ppl*3;
    }
    
    cout<<tppl;
    
    return 0;
}
