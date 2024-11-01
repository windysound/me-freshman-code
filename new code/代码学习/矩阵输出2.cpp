#include<stdio.h>
int main()
{
	int m[20],n,a,i,j,k;
		scanf("%d",&a);
	for(i=0;i<a;i++)
		scanf("%d",&m[i]);
	for(i=0;i<a-1;i++){
		printf("%d ",m[i]);
		}
		
		printf("%d",m[a-1]);
		
		printf("\n");
		
	for(j=1;j<a;j++)
	{
		
	for(i=a-1;i>=0;i--){
		m[i+1]=m[i];}
		
		
		m[0]=m[a];
		
		
	for(k=0;k<a-1;k++){
		printf("%d ",m[k]);}
		
		
		printf("%d",m[a-1]);
		printf("\n");
	}
	return 0;
}

