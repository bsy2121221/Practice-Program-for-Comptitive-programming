#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int j=0;
    int b[n];
    for(int i=n-1;i<=0;i++)
    {
        b[j++]=a[i];
    }
    for(int i=0;i<n;i++)
    cout<<b[i];
    return 0;
}
