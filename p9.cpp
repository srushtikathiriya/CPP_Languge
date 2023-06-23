#include<iostream>
using namespace std;
int main()
{
    char i,j,x=65;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<x;
            x++;
        }
        cout<<"\n";
    }
}