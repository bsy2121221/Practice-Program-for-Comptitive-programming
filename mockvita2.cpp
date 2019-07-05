#include <bits/stdc++.h>
using namespace std;
int main() {
	
	
     std::string str;
     cin>>str;
    std::vector<int> v;

    std::stringstream ss(str);

    int i;

    while (ss >> i)
    {
        v.push_back(i);

        if (ss.peek() == ',')
            ss.ignore();
    }

   // for (i=0; i< v.size(); i++)
     //   cout << v.at(i)<<" ";
    
    int m1=-1,m2=-1,d1=-1,d2=-1,h1=-1,h2=-1,min1=-1,min2=-1,j=0;
        sort(v.begin(),v.end());
        
        vector<int> v1(10,0);
        
            for(int i=0;i<12;i++)
            {
                v1[v[i]]++;
            }
            
             for (i=0; i< v1.size(); i++)
        cout << v1.at(i)<<" ";
            
            
            for(int i=1;i>=0;i--)
            {
                if(v1[i]!=0)
                {
                   m1=i;
                    v1[i]--;
                    break;
                }
            }
            
            
            if(m1==1)
            {
            for(int i=2;i>=0;i--)
            {
                if(v1[i]>0)
                {
                    m2=i;
                    v1[i]--;
                    break;
                }
            }
            }
            
            else if(m1==0)
			{
                for(int i=9;i>1;i--)
                {
                    if(v1[i]>0)
                    {
                        m2=i;
                        v1[i]--;
                        break;
                    }
                }
            }

          int  month=0;
          if(m1!=-1 && m2!=-1)
		  month=m1*10+m2;

            if(month==2)
            {
                for(int i=2;i>=0;i--)
                {
                    if(v1[i]>0)
                    {
                        d1=i;
                        v1[i]--;
                        break;
                    }
                }
                
                
                if(d1==2)
                {
                for(int i=8;i>=0;i--)
                {
                    if(v1[i]>0)
                    {
                        d2=i;
                        v1[i]--;
                        break;
                    }
                }
            	}
            	
            	
            	else
            	{
            		for(int i=9;i>=0;i--)
            		{
            			if(v1[i]>0)
            			{
            				d2=i;
            				v1[i]--;
            				break;
						}
					}
				}
				
				
            }
            	
            else
            {
                for(int i=3;i>=0;i--)
                {
                    if(v1[i]>0)
                    {
                        d1=i;
                        v1[i]--;
                        break;
                    }
                }
                
                
                if((month%2==1 || month==8) && d1==3)
                {
                    for(int i=1;i>=0;i--)
                    {
                        if(v1[i]>=0)
                        {
                            d2=i;
                            v1[i]--;
                            break;
                        }
                    }
                }
                
                
                 if((month%2==1 || month==8) && d1!=3)
                {
                	for(int i=9;i>=0;i--)
                	{
                    	if(v1[i]>0)
                   		{
                        d2=i;
                        v1[i]--;
                    	}
                	}
            	}
                
                 if((month%2==0 && month!=8) && d1==3)
                {
                    for(int i=0;i>=0;i--)
                    {
                        if(v1[i]>0)
                        {
                            d2=i;
                            v1[i]--;
                            break;
                        }
                    }
            	}
            	
            	 if((month%2==0 && month!=8) && d1!=3)
                    for(int i=9;i>=0;i--)
                    {
                        if(v1[i]>0)
                        {
                            d2=i;
                            v1[i]--;
                            break;
                        }
                    }
                
            }
            
            int date=0;
            if(d1!=-1 && d2!=-1)
			date=d1*10+d2;



            for(int i=2;i>=0;i--)
            {
                if(v1[i]>0)
                {
                    h1=i;
                    v1[i]--;
                    break;
                }
            }
            
            
            if(h1==2)
            {
            for(int i=3;i>=0;i--)
            {
                if(v1[i]>0)
                {
                    h2=i;
                    v1[i]--;
                    break;
                }
            }
            }
            
            
            
            else{
                for(int i=9;i>=0;i--)
                {
                    if(v1[i]>0)
                    {
                        h2=i;
                        v1[i]--;
                        break;
                    }
                }
            }
            
            
        int hour=-1;
        if(h1!=-1 && h2!=-1)
		hour=h1*10+h2;

        for(int i=5;i>=0;i--)
        {
            if(v1[i]>0)
            {
                min1=i;
                v1[i]--;
                break;
            }
        }    

        for(int i=9;i>=0;i--)
        {
            if(v1[i]>0)
            {
                min2=i;
                v1[i]--;
                break;
            }
        }

int minute=-1;
		if(min1!=-1 && min2!=-1)
         minute=min1*10+min2;
         
         
        if(month==0 || date==0 || hour==-1 || minute==-1 )
        cout<<"0";
        else
        cout<<month<<"/"<<date<<" "<<hour<<":"<<minute;
        return 0;
}
