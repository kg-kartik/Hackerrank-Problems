#include<iostream.h>
int main(){
    int t,n,c,m,w=0,nc=0,count=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>c>>m;
        w=n/c;
        count = w;
        while(w-m >= 0)
        {
            w = w-m;
            w++;
            count++;
        }
        cout<<count+nc<<endl;
        nc=0;
    }
    return 0;
}