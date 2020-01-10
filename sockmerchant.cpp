#include<iostream.h>
#include<conio.h>
int i,n,j,count,output;
void main() {
    cin>>n;
    int arr[10];
    for(i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        count = count/2;
        cout<<count;
        output = output+count;
        count = 0;
    }
    cout<<output;
}