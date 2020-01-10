#include<iostream.h>
#include<conio.h>
int main()
{
    int n,k,i,j,t,l,count=0;
    cin>>t;
    for(i=0;i<t;i++)
    {   
        cin>>n>>k;
        int arr[n];
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
        }
    for(l=0;l<n;l++)
    {
        if(arr[l] <= 0)
        {
            count++;
        }
    }
        if(count >= k)
        {
            cout<<"NO";
        }
        else 
        {
            cout<<"YES";
        }
        count = 0;
        cout<<endl;
    }
    return 0;
}
