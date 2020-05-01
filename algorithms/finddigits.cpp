#include<iostream.h>
int main()
{
    int t,number,per=0,remainder,count=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>number;
        per = number;
        while(number != 0)
        {
            remainder = number%10;
            number = number/10;
            if(remainder == 0)
            {
                continue;
            }
            else if (per % remainder == 0)
            {
                count++;
            }
        }
        cout<<count;
        count=0;
        cout<<endl;
    }
    return 0;
}