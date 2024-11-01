#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,i,j,k;
	int a[100];
	cin>>n;
	for(int i=0;i<n;i++)   //输入
	{
		cin>>a[i];
		
	}
	for(int i=0;i<n;i++)   
	{
		  //第一行输出
		if(i==n-1)
		cout<<a[i]<<'\n';
		else
		cout<<a[i]<<' '; 
		
		/*第一次输出*/
		
		/*第二次输出*/
	}
	for(i=1;i<n;i++)
	{
		a[i+1]=a[i];
	}
	a[0]=a[n];
	
	for(k>n-1;k>=0;k--)
	{
		cout<<a[k]<<' ';
		
	}
	cout<<a[n-1]<<'\n';
	return 0;
}