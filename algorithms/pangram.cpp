#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int i;
    set<int>a;
    
    for(i=0;i<s.length();i++)
    {
        s[i] = tolower(s[i]);
        a.insert(int(s[i]));
    }
    a.erase(32);
   
    if(a.size() == 26){
        cout<<"pangram";
    }
    else {
        cout<<"not pangram";
    }
    return 0;
}

 
