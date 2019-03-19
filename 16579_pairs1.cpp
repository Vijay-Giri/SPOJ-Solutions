#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	map<int,int> m;
	int val;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>val;
		v.push_back(val);
	}
	sort(v.begin(),v.end());
	long long int ans=0;
	for(int i=0;i<v.size();i++)
	{
		if(binary_search(v.begin(),v.end(),v[i]+k)==true)
		{
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
