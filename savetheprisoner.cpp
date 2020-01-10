#include<iostream.h>
#include<conio.h>
int main()
{
    int t=0,n=0,m=0,s=0,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>m>>s;
        cout<<endl;
    }
    for(i=s;i<=i+m;i++)
    {
        if(i > n)
        {
            void check() {
                for(i=0;i<m-(n-s);i++)
                {
                   cout<<i;
                }
            }
        }
        else {
            cout<<i+m;
        }
    }
}