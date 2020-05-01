#include<iostream.h>
#include<conio.h>
int arr1[10],arr2[10],s,t,a,b,m,n,count1,count2;
void countAppleAndOranges(s,t,a,b,m,n)
{
		for(int i =0;i<m;i++)
		{
			cin>>arr1[i];
		}
		for(int j=0;j<n;j++)
		{
			cin>>arr2[j];
		}
		for(i=0;i<m;i++)
		{
			if(arr1[i]+a>=s && arr1[i]+a <=t)
			{
				count1++;
			}
		}
		for(j=0;j<n;j++)
		{
			if(arr2[j]+b>=s && arr2[j]+b<=t)
			{
				count2++;
			}
		}
}
void main()
{
		cin>>s>>t;
		cin>>a>>b;
		cin>>m>>n;
		countAppleAndOranges(s,t,a,b,m,n);
		cout<<count1<<endl<<count2;
		getch();
}