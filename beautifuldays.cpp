#include<iostream.h>
#include<conio.h>
int main() {
    int l,m,k,i,r,count=0;
    cin>>l>>m>>k;
    for(i=l;i<=m;i++)
    {
       int p=i,r=0;
       while (p != 0)
        {
           r = r*10 + p%10; 
           p = p/10; 
        }
        if(abs((r-i)%k) ==0)
        {
            count++;   
        }
    }
    cout<<count;
}
