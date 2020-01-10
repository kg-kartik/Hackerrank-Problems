#include<iostream.h>
#include<conio.h>
int i,j;
void main()
{
	int sumr =0,sumc=0,sumd=0;
	int arr[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sumr  = sumr + arr[i][j];
			sumc = sumc+ arr[j][i];
			if(i==j)
			{
				sumd = sumd+arr[i][i];
			}

		}
		sumr = 0;
		sumc 
		= 0;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(sumr==sumc && sumc==sumd)
			{
				cout<<"0";
			}
			else {

			}
		}
	}
	getch();
}
