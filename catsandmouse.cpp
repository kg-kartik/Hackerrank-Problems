include<iostream.h>
#include<math.h>
int main()
{
    int q,x,y,z;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>x>>y>>z;
        if(abs(z-x) > abs(z-y))
        {
            cout<<"Cat B";
        }
        else if(abs(z-x) == abs(z-y))
        {
            cout<<"Mouse C";
        }
        else {
            cout<<"Cat A";
        }
        cout<<endl;
    }
    return 0;
}
