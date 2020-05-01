#include<iostream.h>
int main()
{
    long n,d,i,count=0;
    cin>>n>>d;
    int arr[n];
    bool result[1000000];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        result[arr[i]] = true;
    }
    for(i=0;i<n;i++)
    {
        if(result[arr[i]+d] && result[arr[i]+d+d])
        {
            count++;
        }
    }    
    cout<<count;
    return 0;
}