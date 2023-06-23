#include<iostream>
using namespace std;
int main()
{
    int a[10],i,odd=0,even=0,total=0;
    for(i=0;i<10;i++)
    {
        cout<<"enter val:",a[i];
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        if(i%2==0)
        {
            even=even+a[i];
        }
        else{
            odd=odd+a[i];
        }
    }
    total=even+odd;
    cout<<"even sum:"<<even;
    cout<<"\nodd sum:"<<odd;
    cout<<"\ntotal is:"<<total;
}
