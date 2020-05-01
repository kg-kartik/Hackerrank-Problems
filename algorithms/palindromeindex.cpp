#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    long i;
    cin>>t;
    while(t--) {
        string s,s1,s2;
        cin>>s;
        for(i=0;i<s.length();i++)
        {
            s1 =s;
            s1.erase(i,1);
            s2 =s1;
            reverse(s2.begin(),s2.end());
            if(s1 == s2){
                cout<<i<<endl;
                break;
            }
        }
    }
}
