//Sequence Equation

#include<iostream>
using namespace std;

int main()
{
	int n,i,x,j;
	//here n is the number of integers in the array
	
	cin>>n;
	
	int p[n];
	
	for(i=1;i<=n;i++)
	{
		cin>>p[i];
	}
	
	for(x=1;x<=n;x++)
	{
		for(i=1;i<=n;i++)
		{
			if(x == p[i])
			{
				for(j=1;j<=n;j++)
				{
					if(i==p[j])
					{
						cout<<j<<"\n";
					}
				}
			}
		}
	}
	
	return 0;
}
