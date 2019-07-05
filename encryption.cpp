#include <bits/stdc++.h>
using namespace std;

// Complete the encryption function below.
void encryption(string s) {
            int count=0;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]!=' ')
                count++;
            }
            for(int i=0;i<s.length();i++)
            {
                if(s[i]==' ')
                {
                    for(int j=i;j<s.length();j++)
                      s[j] = s[j + 1];
                }

            }
        double count2=sqrt(count),k=0;
        int row=floor(count2);
        int column=ceil(count2);
        if(row*column<count)
        {
            column=row=max(row,column);
            
        }
        char str1[row][column];
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                str1[i][j]=s[k++];
                if(k==count)
                break;
            }
        }
        for(int i=0;i<column;i++)
        {
            for(int j=0;j<row;j++)
            {
                cout<<str1[j][i];
            }
            cout<<" ";
        }
}

int main()
{

    string s;
    cin>>s;

     encryption(s);

    return 0;
}

