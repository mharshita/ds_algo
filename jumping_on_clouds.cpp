// Jumping on the clouds

#include<iostream>
using namespace std;

int main()
{
	
	int n,count=0;
	
	cin>>n;
	
	int c[n],i;
	
	for(i=0;i<n;i++)
	{
		cin>>c[i];
	}
	
	for(int i=0;i<n;)
    {
        if(i+2<n)
        {
            if (c[i + 1] == 0 && c[i + 2] == 0)
            {
                count++;
                i += 2;
            }
            else if(c[i + 1] == 0 && c[i + 2] == 1)
            {
                count++;
                i += 1;
            }
            else if (c[i + 1] == 1 && c[i + 2] == 0)
            {
                count++;
                i += 2;
            }
        }
            else
            {
                if(i<n-1)
                count++;
                i++;
            }
                
    }
    
	cout<<count;
	
	return 0;        
}
