#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		char stack[405];
		int top=-1;
		for(int i=0;i<s.length();i++)
		{
			if(s.at(i)=='(')
			{
				continue;
			}
			else if(s.at(i)>='a' && s.at(i)<='z')
			{
				cout<<s.at(i);
			}
			else if(s.at(i)==')')
			{
				cout<<stack[top];
				top--;
			}
			else
			{
				top++;
				stack[top]=s.at(i);
			}
		}
		while(top>=0)
		{
			cout<<stack[top];
			top--;
		}
		cout<<endl;
	}
	return 0;
}
