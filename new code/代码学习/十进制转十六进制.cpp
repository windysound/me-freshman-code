#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,i,index=0;  //m是十进制，n是某进制。
	int a[100];
	cin>>m>>n;
	while(m)
	{
		a[index]=m%n;
		m=m/n;
		index++;
		
	}
		for(i=index-1;i>=0;i--)
		{
			if(a[i]<10)
			cout<<a[i];
			else
			cout<<(char)((a[i]-10)+'A');
		}
		return 0;
	}
