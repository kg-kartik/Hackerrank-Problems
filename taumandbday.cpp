#include<iostream.h>
#include<algorithm.h>
int main(){
    long t,b,w,bc,wc,z,cost=0,i=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>b>>w;
        cin>>bc>>wc>>z;
        cost = b*(min(bc,wc+z)) + w*(min(wc,bc+z));
        cout<<cost<<endl;
        return 0;
    }
}
