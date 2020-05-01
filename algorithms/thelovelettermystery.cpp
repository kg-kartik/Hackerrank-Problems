#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    string s;
    while(t--) {
        cin>>s;
        int i =0;
        int j =s.length()-1;
        int count =0;
        while(i<j) {
            count = count + abs(s[i] - s[j]);
            i++;
            j--;
        } 
        cout<<count<<endl;
    }
}