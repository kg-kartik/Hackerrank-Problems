#include<iostream.h>
#include<conio.h>
int main()
{
    int b=0,n=0,m=0,i,j,sum=0,count=0,temp=0,counter=0,minimum=0;
    cin>>b>>n>>m;
    int arr1[n],arr2[m];
    int arr[m*n];
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(j=0;j<m;j++)
    {
        cin>>arr2[j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum = arr1[i]+arr2[j];
            count++;
        }
        arr[count] = sum;
        sum=0;
    }
    for(i=1;i<=count;i++)
    {
        for(j=i+1;j<j<=count;j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i=1;i<=count;i++)
    {
        if(arr[i] > b)
        {
            counter++;
        }
        else
        {
            minimum = arr[0];
            if((arr[i]<b) && ((b-arr[i])< minimum))
            {
                minimum = arr[i];
            } 
        }
    }   
    if(counter == count)
    {
        cout<<"-1";
    }
    else 
    {
        cout<<minimum;
    }
    return 0;
}

