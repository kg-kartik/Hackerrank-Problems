#include<iostream.h>
#include<math.h>
int main()
{
    int i,n,liked=2,commulative=2;
    cin>>n;
    for(i=1;i<n;i++)
    {
        liked = (liked*3)/2;
        commulative = commulative+liked;
    }
    cout<<commulative;
    return 0;
}