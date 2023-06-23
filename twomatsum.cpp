#include<iostream>
using namespace std;
int main()
{
    int a[5][5],b[5][5],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"enter val :",a[i][j];
            cin>>a[i][j];
        }
        cout<<"\n";
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"enter val :",b[i][j];
            cin>>b[i][j];
        }
        cout<<"\n";
    }
    for(i=0;i<3;i++)
    {
        cout<<"\n";
        for(j=0;j<3;j++)
        {
            cout<<a[i][j];
        }
         cout<<"\t";
        for(j=0;j<3;j++)
        {
            cout<<b[i][j];
        }
         cout<<"\t";
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]+b[i][j];
        }
    }
}