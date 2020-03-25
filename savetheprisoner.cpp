#include<iostream>
int main()
{
    int t,i,j,n,m,s,result;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>m>>s;
        result = (m+s-1)%n;
        if( result == 0) {
            cout<<n<<endl;
        }
        else {
            cout<<result<<endl;
        }
    }
    return 0;
}