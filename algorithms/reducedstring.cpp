#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    long n;
    string s;
    cin>>s;
    n = s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i] == s[i+1])
        {
            s.erase(i,2);
        }
        if(s.length() <=  i)
            {
                 for(int i=0;i<n;i++)
                 {
                    if(s[i] == s[i+1])
                        s.erase(i,2);
                 }
            }
    }
    if(s == "")
        cout<<"Empty String"<<endl;
    else
        cout<<s<<endl;
}