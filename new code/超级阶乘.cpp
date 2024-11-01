#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long a,b,sum=1,dsum=1,ddsum=0,t,i,j,k;
	cin>>a>>b;
	if(a>b)
	{
		t=a;a=b;b=t;
	}
for(k=a;k<=b;k++)
{
	dsum=1;
	for(j=1;j<=k;j++)
	{
sum=1;
	for(i=1;i<=j;i++)
	{
		sum*=i;
	}
		//cout<<sum<<'\n';
	dsum*=sum;
}
	cout<<dsum<<'\n';
	ddsum+=dsum;
}
//cout<<dsum<<'\n';
cout<<ddsum;
}








	
