#include<iostream>
using namespace std;
int main(){
    long n,k,i,j;
    cin>>n>>k;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int page =1,count=0;
    for(i=0;i<n;i++)
    { 
        int j=1;
        while(arr[i] > 0)
        {
            if(page == j)
            {
                count++;
            }
            if(j% k == 0  && arr[i] != 0)
            {
                page++;
            }
            arr[i]--;
            j++;
        }
    }
    cout<<count;
}
