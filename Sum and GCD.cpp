#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int gcd(int a,int b)
{
	if(a==0)
	return b;
	return gcd(b%a,a);
}
int main()
{ 
    fio
	int t;
	cin>>t;
	while(t--)
	{
		long n,count=0,ans,ans2=0;
		int gcd1=0,gcd2=0;
		cin>>n;
		vector<long>A(n);
		
		vector<int>even;
		vector<int>odd;
		for(int i=0;i<n;i++)
		{
		cin>>A[i];
		}
		set<int>s(A.begin(),A.end());
		vector<int>B(s.begin(),s.end());
		
	int k=B.size();
		
		if(B.size()==1)
		{
			cout<<2*B[0];
		}
		 else
		 {
		 	sort(B.begin(),B.end());
		 	int j=1;
			 while(k/2>0)
			 {	
		 	
		 	int max=B[k-j];
		 	even.push_back(max);
			for(int i=0;i<B.size();i++)
			{
				if(i!=k-j)
				odd.push_back(B[i]);
			}
			
			
			 if(!even.empty())
			 {
			 	int result1=even[0];
			 	for(int j=1;j<even.size();j++)
			 	{
				 result1=gcd(even[j],result1);
			 	}
			 	gcd1=result1;
			 }
	
			 
			 if(!odd.empty())
			 {
				int result2=odd[0];
			  for(int i=1;i<odd.size();i++)
			 {
			 	result2=gcd(odd[i],result2);
			 }
			 gcd2=result2;
				}
			  ans=gcd1+gcd2;
			  if(ans>ans2)
			  ans2=ans;
			  else
			  break;
			  k--;
			  even.clear();
			  odd.clear();
			  
		}
			  cout<<ans2;
	}
	
	cout<<endl;
	
		}
	return 0;
}
