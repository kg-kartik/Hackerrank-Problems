#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while (t--) {
    string s;
    cin>>s;
    int len = s.length();
    if (len % 2 == 1) {
        cout<<"-1"<<endl;
        continue;
    }
    int f[26] = {0};
    int count = 0;
    for(int i = 0; i < len/2; i++) {
        f[s[i] - 'a']++;
    }
    for(int i = len/2; i < len; i++) {
        char c = s[i];
        f[s[i] - 'a']--;
    }
    for(int i = 0; i < 26; i++) {
       count += abs(f[i]);
    }
    cout<<count/2<<endl;
}
}
