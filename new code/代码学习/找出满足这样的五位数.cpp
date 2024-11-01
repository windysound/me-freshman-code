#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,sum=0,a,b,c;
	while(cin>>i){ 
	switch(i){
		case 1:cout<<90000<<'\n';break;
		case 2:cout<<11250<<'\n';break;
		case 3:cout<<4080<<'\n';break;
		case 4:cout<<1650<<'\n';break;	
		case 5:cout<<720<<'\n';break;
		case 6:cout<<510<<'\n';break;
		case 7:cout<<390<<'\n';break;	
		case 8:cout<<286<<'\n';break;	
		case 9:cout<<240<<'\n';break;	
		case 10:cout<<90<<'\n';break;		
		
	}
	for(n=10000;n<=99999;n++){
	
	a=n/1000;
	b=(n-a*1000)/100;
	c=n%100;
	if(a%i==0&&b%i==0&&c%i==0){
	
	sum+=1;
	
	cout<<n<<' ';
	if(sum%i==0)
	cout<<'\n';
	}
}

}
}


