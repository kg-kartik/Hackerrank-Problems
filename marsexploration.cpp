#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,a;
    cin>>s;
    int n,count=0;
    n = s.length()/3;
    for(int j=0;j<n;j++)
    {
        a =  a +"SOS";
    }
    for(int i=0;i<s.length();i++)
    {
        if(a[i] != s[i])
        {
            count++;
        }
    }
    cout<<count;
}