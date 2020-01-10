#include<iostream.h>
#include<conio.h>
void main(){
    int n,i,j,max,count=0;;
    int arr[10];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max = arr[0];
    for(i=1;i<n;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
     for(i=0;i<n;i++)
    {   
        if(max==arr[i])
        {
            count++;
        }
    }
    cout<<count;
}