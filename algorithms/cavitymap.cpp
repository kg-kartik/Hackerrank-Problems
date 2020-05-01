#include<iostream.h>
int main()
{
    int n,i,j;
    cin>>n;
    int arr[4][4];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0 || j==0 || i==n-1 || j==n-1)
            {
                cout<<arr[i][j];
            }
             else if(arr[i][j] > arr[i][j-1] && arr[i][j] > arr[i][j+1] && 
            arr[i][j]> arr[i-1][j] && arr[i][j] > arr[i+1][j])
            {
                cout<<"X";
            }
            else {
                cout<<arr[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}