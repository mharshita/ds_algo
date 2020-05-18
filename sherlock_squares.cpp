//Sherlock And Squares

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int q,a,b,i,j;
	
	cin>>q;
	
	for(j=0;j<q;j++)
	{
		cin>>a>>b;
		
		int count = 0;
		
		for(i=1; ;i++)
		{
			if(i*i>b)
			{
				break;
			}
			if(i*i>=a && i*i<=b)
			{
				count++;
			}
		}
		 cout<<count<<"\n";
	}
return 0;
}
