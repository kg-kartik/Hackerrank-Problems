#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack> 
using namespace std;

int main() {
    stack <int> s;
    int t,type,n,i=0;
    cin>>t;
    int arr[t];
    while(t--) {
        cin>>type;
        if(type == 1) {
            cin>>n;
            if(s.empty()) {
                s.push(n);
            }
            else {
                s.push(max(n,s.top()));
            }
        }
        if(type == 2){
            if(!s.empty()) {
                s.pop();
            }
        }
        if(type == 3) {
            cout<<s.top()<<endl;
        }
    }
    return 0;
}
