#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,num=1,N;
	int a[100][100];
	cin>>N;		//最开始的圈数
	int loop=N/2;
	if(N%2==1)	//奇数圈
		a[N/2][N/2]=N*N;
	
	
	for(loop=0;loop<N/2;loop++)		//每一圈
	{
		for(j=loop;j<N-loop-1;j++)		//向右
		{
			a[loop][j]=num++;
	 	}
	 	for(i=loop;i<N-loop-1;i++)	//向下
	 	{
	 		a[i][N-1-loop]=num++;
		}
		for(j=N-loop-1;j>loop;j--)		//向左
		{
			a[N-1-loop][j]=num++;
		}
		for(i=N-1-loop;i>loop;i--)
		{
			a[i][loop]=num++;
		}
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			printf("%-4d",a[i][j]);
		puts("\n");
	}
}
