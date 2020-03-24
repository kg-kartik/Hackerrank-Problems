#include<iostream.h>
int main()
{
    long t;
    cin>>t;
    long v=3;
    while(t>v)
    {
        t = t-v;
        v=v*2;
    }
    cout<<v-t+1;
    return 0;
}
