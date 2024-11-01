#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,N,i,temp,sum=0,j,k;
	int a[1000];
	cin>>T;
	for(k=1;k<=T;k++)
	{
	cin>>N;
	if(0<N&&N<=100){
	
	
		for(i=0;i<N;i++)
		{
			cin>>a[i];
		}
		sum=0;
		
		for(i=0;i<N-1;i++)
		{
		
			for(j=0;j<=N-i-2;j++)
			{
				if(a[j]>a[j+1])
				{	
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
					sum++;
				}
			}
		}
		cout<<sum<<'\n';
	
}
}
	return 0;
}