#include<iostream.h>
#include<conio.h>
void main(){
	int n;
	cout<<"Enter n";
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j*i<<" ";
		}
	cout<<endl;
	}
	getch();
}