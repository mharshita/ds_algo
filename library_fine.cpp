//Library Fine

#include<iostream>
using namespace std;

int main()
{
	int d1,m1,y1,d2,m2,y2;   //1 is returned and 2 is due...
	
	cin>>d1>>m1>>y1;
	
	cin>>d2>>m2>>y2;
	
	if(y1==y2 && m1==m2)
	{
		if(d1<=d2)
		{
			cout<<0;
		}
		else
		{
			cout<<15*(d1-d2);
		}
	}
	
	else if(y1==y2 && m1<m2)
	{
		cout<<0;
	}
	
	else if(y1==y2 && m1>m2)
	{
		cout<<500*(m1-m2);
	}
	
	else if(y1>y2)
	{
		cout<<10000;
	}
	
	else if(y1<y2)
	{
		cout<<0;
	}
	
	return 0;
}
