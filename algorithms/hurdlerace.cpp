#include<iostream.h>
int main()
{
    int n,k,max,i;
    cin>>n>>k;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max = arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    if(k<max)
    {
        cout<<max-k;
    }
    else 
    {
        cout<<"0";
    }
    return 0;
}