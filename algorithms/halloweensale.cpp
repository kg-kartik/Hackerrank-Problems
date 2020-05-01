#include<iostream.h>
int main(){
    long p,d,m,s,cost=0,i=0,count=0;
    cin>>p>>d>>m>>s;
    for(i=p;i>=m;i =i-d)
    {
        cost = cost+i;
        count++;
    }
    while(cost <= s)
    {
        cost =cost+m;
        count++;
    }
    if(p>s)
    {
        cout<<"0";
    }
    else {
        cout<<count-1;
    }
    return 0;
}