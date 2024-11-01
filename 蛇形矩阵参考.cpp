#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int n;
	cin>>n;
	int a[n][n];
	int i,j,k=1;
	i=0;j=0;
	while(k<=n*n)			//k表示数组的第几个元素
	{
		
		while(i<n&&j>-1)
		{
			a[i][j]=k++;	//k在赋值的时候不变，过后才增值
			i++;j--;		//此处运行了一次，赋值了数组的第一个元素
		}
		
		if(j<0&&i<n)
		j=0;				//边缘部分处理
		else
		{
			j=j+2; i=n-1;	//斜向处理
		}
		
		while(i>-1&&j<n)
		{
			a[i][j]=k++;
			i--;j++;
		}
		
		if(i<0&&j<n)
		{
			i=0;
		}
		else
		{
			i=i+2; j=n-1;
		}
			
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",a[i][j]);
			if(j==n-1)
			cout<<endl;
		}
	}
}
