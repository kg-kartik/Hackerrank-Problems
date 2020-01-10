#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<math.h>

void main()
{
	int count;
	char s[81];
	for(int i=0;i<81;i++)
	{
		cout<<s[i];
		
		if(s[i] == '\r\n')
		{
			break;
		}
		cin>>s[i];
	}
	for(i=0;i<strlen(s);i++)
	{
		if(s[i] != ' ' )
		{
			s[count++] = s[i];
			s[count] = '\0';
		}
	}
	for(i=0;i<strlen(s);i++)
	{
		cout<<s[i];
	}
getch();
}