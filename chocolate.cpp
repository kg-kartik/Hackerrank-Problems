#include<iostream.h>
#include<conio.h>
int main(){
    int n,i=0,j=0,d,m,sum=0,count=0;
    int arr[10];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>d>>m;
    for(i=0;i<n;i++)
    {
        for(j=i;j<i+m;j++)
        {
            if(j>n){
                break;
            }
            sum = sum +arr[j];
        }
        if(sum == d)
        {
            count++;
        }
        sum=0;
        cout<<count;
        return count;
    }
}

