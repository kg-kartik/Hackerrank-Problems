#include<iostream>
#include<math.h>
int main()
{
    long n,i,j,k=-1,result=0,minimum=INT_MAX;
    cin>>n;
    int arr1[n];
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j] && j-i < minimum)
            {
                minimum = j-i;
            }
        }
    }
    
        if(minimum == INT_MAX)
        {
            cout<<"-1";
        }
        else {
            cout<<minimum;
        }
    return 0;
}
