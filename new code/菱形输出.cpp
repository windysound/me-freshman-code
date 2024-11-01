#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,j,i,k,r,t,s;
	cin>>n;
	for(i=1;i<=n;i++)   //第几行
		{
			for(j=1;j<=n-i;j++) //左边空格
			{
				cout<<'\0';
			}
			cout<<i;
			for(k=1;k<=i-1;k++)  //中间空格
			{
				cout<<'\0';
				if(k>1)
				cout<<'\0';
			
			}
					if(i>1)   //确保第一行只有一个输出
					cout<<i<<'\n';
					else
					cout<<'\n';
		}
	//上半部
	for(i=n-1;i>1;i--)
	{
		for(j=0;j<n-i;j++)
			printf(" ");
		printf("%d",i);
		
		for(j=0;j<2*(i-1)-1;j++)
			printf(" ");
 
		printf("%d\n",i);
	}
 
	for(i=0;i<n-1;i++)
		printf(" ");
	printf("1\n");


}