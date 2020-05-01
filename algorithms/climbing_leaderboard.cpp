#include<iostream.h>
#include<conio.h>
void main()
{
	int n,m,k;
	int scores[100];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>scores[i];
	}
	cin>>m;
	int alice[100];
	for(int j=1;j<=m;j++)
	{
		cin>>alice[j];
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<m;j++)
		{
			if(alice[j]>scores[i])
			{
				rank[j]=i;
			}
		}
		if(scores[i] == scores[i+1])
		{
			rank[i]=i;
			rank[i+1]=i;
			k=i;
			k--;
		}
	}
	for(i=0;i<=(m+n);i++)
	{
		cout<<rank[i];
	}
	getch();
}