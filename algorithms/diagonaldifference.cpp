#include<iostream.h>
#include<cstdlib.h>
int main(){
    int n;
    cin>>n;
    int arr[n][n],sum1=0,sum2=0,result=0,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(i==j)
            {
                sum1 = sum1+arr[i][j];
            }
            if(i+j == n-1)
            {
                sum2 = sum2+arr[i][j];
            }
        }
    }
    result = abs(sum1-sum2);
    cout<<result;
    return 0;
}