/* Read input from STDIN. Print your output to STDOUT*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,f,d,t=0;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n),v(n),h(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        for(int i=0;i<n;i++)
            cin>>p[i];
        
        for(int i=0;i<n;i++)
        {
            int c=INT_MAX,g=0;
            for(int j=0;j<n;j++)
            {
                if(a[j]>b[i])
                {
                     d=p[j]-v[i];
                    if(d<c)
                    {
                        c=d;
                        f=j;
                        g=1;
                    }
                }
            }
        
        if(g==1)
        {
          h[i]=1;
          p.erase(a[f]);
        }
        else
        {
            t=1;
            break;
        }
        }
    if(t==1)
    cout<<"LOSS"<<"\n";
    else
    cout<<"WIN"<<"\n";
    }
}

