#include<iostream.h>
#include<conio.h>
int main(){
    int n,i,j,count,max=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {   
        count = 0;
        for(j=0;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
            if(count > max)
            {
         
                max = count;
            }
    }
    cout<<n-max;
    return 0;   
}