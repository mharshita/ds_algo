//find digits

#include<iostream>
using namespace std;
int main()
{
	int t,i;
    int n;
    
    //here t is number of test cases.
    //n is the integer whose divisor is to be found.
    
    cin>>t;
    
    while (t--)
    {
    	int count = 0;
    	cin>>n;
    	int p = n;
    	while(p != 0)
    	{
    		int rem = p % 10;
    		if(rem == 0);
    		
    		else if(n % rem == 0)
    		{
    			count++;
			}
			p = p/10;
		}
		cout<<count<<"\n";
	}
	
	return 0;
}
