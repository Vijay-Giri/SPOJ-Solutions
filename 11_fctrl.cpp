#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{

        	long long int n;
	        cin>>n;
 	        int count=0;
         	while(1)
	        {

		        if(n<5)
	         	{
			        break;
		        }
		        else
		        {
			        n/=5;
			        count+=n;
		        }
	        }
	        cout<<count<<endl;
	}
	return 0;
}
