#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		vector<int> v,vv,vvv;
		while(a>0)
		{
			v.push_back(a%10);
			a/=10;
		}
		while(b>0)
		{
			vv.push_back(b%10);
			b/=10;
		}
		int c=0,d=0;
		for(int i=0;i<v.size();i++)
		{
			c+=v[i]*pow(10,v.size()-i-1);
		}
	        for(int i=0;i<vv.size();i++)
                {       
                        d+=vv[i]*pow(10,vv.size()-i-1);
                }
	        int e=c+d;
		while(e>0)
		{
			vvv.push_back(e%10);
			e/=10;
		}
		int ans=0;
		for(int i=0;i<vvv.size();i++)
		{
			ans+=vvv[i]*pow(10,vvv.size()-i-1);
		}
		cout<<ans<<endl;
	}
	return 0;
}
