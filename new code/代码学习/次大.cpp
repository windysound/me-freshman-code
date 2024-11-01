#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long T,j,k,m,i,temp,n;
	cin>>T;
	int a[10000];
	while(T--)
	{
		cin>>n;
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		
		for(i=0;i<n-1;i++)
		{
		
			for(j=0;j<=n-i-2;j++)
			{
				if(a[j]>a[j+1])
				{	
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
					
				}
			}
		}
		cout<<a[n-2]<<' '<<a[1]<<'\n';
	}	
	
}