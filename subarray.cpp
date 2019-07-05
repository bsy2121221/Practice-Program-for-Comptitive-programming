#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	int n,sum,k,p,flag=0;
	cin>>n>>sum;
long int a[n];
	for(int i=1;i<=n;i++)
	cin>>a[i];
	    for(int i=1;i<=n;i++)
	    {
	        int s=0;
	        s=s+a[i];
	        for(int j=i+1;j<=n;j++)
	        {
	           s=s+a[j];
	           if(s==sum)
	           {
	           k=i;
	           p=j;
	           flag=1;
	           break;
	           }
	           if(s>sum)
	           break;
	        }
	        if(flag==1)
	        break;
	    }
	    if(flag==1)
	    cout<<k<<" "<<p;
	    else
	    cout<<"-1";
	
	
	cout<<endl;
	}
	return 0;
}
