#include<iostream.h>
int main()
{
    int n,i,max=0,result;
    cin>>n;
    int arr[n],fr[6]={0};
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        fr[arr[i]]++;
    }
    max = fr[0];
    for(i=1;i<6;i++)
    {
        if(fr[i] > max)
        {
            max = fr[i];
            result = i;
        }
    }
    cout<<result;
    return 0;
}
