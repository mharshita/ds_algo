//jumping on the clouds: revisited

#include<iostream>
using namespace std;

int main()
{
	int n,k,i,energy=100;
	
	//where n is the number of clouds and k is the jump distance.
	
	cin>>n>>k;
	
	int clouds[n];
	
	for(i=0;i<n;i++)
	{
		cin>>clouds[i];
	}
	
	for(i=0;i<n;i=i+k)
	{
		if(clouds[i]==0)
		{
			energy--;
		}
		else
		{
			energy = energy - 3;
		}
	}
	
	cout<<energy;
	
	return 0;
}
