#include<iostream.h>
#include<conio.h>
int i,j,temp,count;
void main()
{
    int n;
    cin>>n;
    int arr[10];
    for(i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    
    getch();
}