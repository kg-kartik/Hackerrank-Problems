#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,i;
    vector<int> a1;
    vector<int> a2;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int len = s.length();
        for(i=1;i<len;i++)
        {
            a1.push_back(abs(s[i]-s[i-1]));
        }
        for(i=len-1;i>0;i--)
        {
            a2.push_back(abs(s[i]-s[i-1]));
        }
        
        if(a1 == a2) {
            cout<<"Funny"<<endl;
        }
        else {
            cout<<"Not Funny"<<endl;
        }
    }
}