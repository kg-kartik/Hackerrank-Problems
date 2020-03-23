#include<iostream.h>
#include<algorithm.h>
int main(){
    int b,n,m,i,j,result=-1;
    cin>>b>>n>>m;
    int arr1[100],arr2[100],sum[100];

    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(j=0;j<m;j++)
    {
        cin>>arr2[j];
    }

    int k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum[k++] = arr1[i] + arr2[j];
        }
    }
    
    for(i=0;i<m*n;i++)
    {
        if(sum[i] <= b)
        {
           result = max(result,sum[i]);
        }
    }
    cout<<result;   
    return 0;
}

