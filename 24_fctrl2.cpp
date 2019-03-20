#include<bits/stdc++.h>
using namespace std;

int multiply(int i,int* ans,int asize)
{
	int carry=0;
	for(int j=0;j<asize;j++)
	{
		int x=ans[j]*i+carry;
		ans[j]=x%10;
		carry=x/10;
	}
	while(carry)
	{
		ans[asize]=carry%10;
		carry/=10;
		asize++;
	}
	return asize;
}

void CalculateFactorial(int n)
{
	int ans[200];
	int asize=1;
	ans[0]=1;
	for(int i=2;i<=n;i++)
	{
		asize=multiply(i,ans,asize);
	}
	for(int i=asize-1;i>=0;i--)
	{
		cout<<ans[i];
	}
	cout<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		CalculateFactorial(n);
	}
	return 0;
}
