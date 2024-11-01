#include<iostream>
#include<math.h>
int prime(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
using namespace std;
int main()
{
	int m,n;
	int t;
	if(m>n)
	{
		t=m;m=n;n=t;
	}
	cin>>m>>n;
	
	if(m==1)
	m=2;
	
	int i,j;
	for(i=m;i<=n;i++)
	{
		if(prime(i))
		cout<<i<<",";
		else
		for(j=i-1;j>1;j--)
		{
			if(i%j==0&&prime(j))
			{
				if(i<n)
				{
					cout<<j<<",";break;
				}
				else
				cout<<j<<endl;break;
			}
		}
	}
}