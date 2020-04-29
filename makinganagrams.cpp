#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2;
    cin>>s1>>s2;
    int i,c=0;
    int f1[26] = {0};
    int f2[26] = {0};
    for(i=0;i<s1.length();i++)
    {
        f1[s1[i]-'a']++;
    }
    for(i=0;i<s2.length();i++)
    {
        f2[s2[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        c = c+abs(f1[i]-f2[i]);
    }
    cout<<c;
}