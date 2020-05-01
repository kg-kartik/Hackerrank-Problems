#include<iostream.h>
#include<conio.h>
void main()
{
    int arr[5];
    int i,j,min=0,max=0,temp=0;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0;i<4;i++)
    {
        min = min + arr[i];
    }
    cout<<min;
    for(i=1;i<5;i++)
    {
        max = max + arr[i]; 
    }
    cout<<max;
}