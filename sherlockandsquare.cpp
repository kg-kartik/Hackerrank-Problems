#include<iostream.h>
#include<math.h>
int main(){
    int t,a,b,c,d,count=0;
    cin>>t;
    while(t > 0)
    {
        cin>>a>>b;
        c= sqrt(a);
        d= sqrt(b);
        for(int i=c;i<=d;i++)
        {
            if(i*i >=a && i*i<= b)
            {
                count++;
            }
        }
        cout<<count<<endl;
        count = 0;
        t--;
    }
    return 0;
}
