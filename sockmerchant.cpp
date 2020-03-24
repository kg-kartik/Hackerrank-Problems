#include<iostream.h>
int main()
{
    long n,i,freq[101]={0};
    long result=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        freq[a[i]]++;
    }
    for(i=0;i<101;i++)
    {
        if(freq[i]!=0){
            result=result+(freq[i]/2);
        }
    }
    cout<<result;
    return 0;
}