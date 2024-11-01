#include<bits/stdc++.h>
using namespace std;

const int MAX = 15;

int main() 
{
	int n;
	cout<<"请输入一个小于15的数字:_____ ";
	cin >> n;		//数列的行列
	
	int a[MAX][MAX]={0};		// a[0][0] = 1
	int i = 0, j = 0;
	int times = 2;
	int row=1;
	int flag=0;
	//先向一个方向移动一个，再是对角线移动
	a[0][0] = 1;					//定义第一个数
	
	while( 1 )				//左上三角
	{
		
				
			a[++i][j]=times;		//第一次向下
			times++;
			
			
				do
				{
					i--;j++;
					a[i][j] = times;
					times++;
					if(j==n-1)
					flag=1;
				}while(i!=0);
				
				if(flag==1)
				break;
						
						
						
			a[i][++j]=times;
			times++;
			
		
				do
				{
					j--;i++;
					a[i][j] = times;
					times++;
					if(i==n-1)
					flag=1;
				}while(j!=0);
				
			//row++;
			if(flag==1)
			break;
	}
	
	

//右下三角部分
		flag=0;
		int cnt=0;
		
		if(n%2==0)	//偶
		{
			while(1)
			{
				a[++i][j]=times;
				times++;
				cnt++;
				if(cnt==n/2)
				break;
				
				while(i!=n-1)
				{
					i++;j--;
					a[i][j]=times;
					times++;
				}
				
				a[i][++j]=times;
				times++;
				
				while(j!=n-1)
				{
					i--;j++;
					a[i][j]=times;
					times++;
				}
				
				
			}
		}
		
		else		//奇数
		{
			while(1)
			{
				a[i][++j]=times;
				times++;
				
				while(j!=n-1)
				{
					i--;j++;
					a[i][j]=times;
					times++;
				}
				
				a[++i][j]=times;
				times++;
				cnt++;			//*
				
				while(i!=n-1)
				{
					i++;j--;
					a[i][j]=times;
					times++;
					
				}
				
				if(cnt==n/2)
				break;
			}
		}
			   
	  
	//输出部分
	for ( i=0; i<n; i++ )
	{
		for ( j=0; j<n; j++ )
		{
			printf("%-4d",a[i][j]);
			if( j == n-1)
			cout << endl;
		}
	} 
	
	return 0;
}
