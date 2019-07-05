#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a1,b;
    cin>>a1>>b;
    string a[11] = {"even", "odd", "one",   "two",   "three", "four",
                    "five", "six", "seven", "eight", "nine"};
        for(int i=a1;i<=b;i++)
        {
            if(i>9 && (i%2==0))
            cout<<a[0]<<endl;
            if(i>9 && (i%2==0))
            cout<<a[1]<<endl;
            else
            cout<<a[i+1]<<endl;

        }
    return 0;
}


