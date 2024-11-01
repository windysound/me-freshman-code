#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,t,i,mmax,mmin;
	cin>>a>>b;
	if(a<b){
	t=a,a=b,b=t;}
	for(i=1;i<=a;i++)   {        //max
		if(a%i==0&&b%i==0)
		mmax=i;}
		printf("%d\n",mmax);
	
	mmin=a*b/mmax;
	cout<<mmin<<endl;
	
	
		
	
}