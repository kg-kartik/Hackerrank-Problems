#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int count = 0;
   int length = s.length();
   for(int i=0;i<length;i++)
   {
       if(isupper(s[i]))
       {
           count++;
       }
   } 
   cout<<count+1;
}
