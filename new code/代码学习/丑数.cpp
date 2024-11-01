#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=1e6+100;
int a[maxn];
int main()
{
	int n;
	cin>>n;
	a[1]=1;  //对数列第一个定义
	int p2=1,p3=1,p5=1;  //2,3,5每一项的开始都是一
	for(int i=2;i<=n;i++)
	{
		int lastnum=a[i-1]; //以a[1]开始，前一项的数
		while(a[p2]*2<=lastnum) p2++;
		while(a[p3]*3<=lastnum) p3++;
		while(a[p5]*5<=lastnum) p5++;
		a[i]=min(a[p2]*2,min(a[p3]*3,a[p5]*5));
		cout<<a[i]<<endl;
	}
	cout<<a[n]<<endl;
	return 0;
}