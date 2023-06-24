#include<iostream>
using namespace std;
int main()
{
    int i,j,x=4;
    
        for(i=1;i<=4;i++)
        {
            for(j=1;j<=i;j++)
            {
                cout<<x;
                x--;
            }
            x=4;
            cout<<"\n";
        }
          for(i=3;i>=1;i--)
        {
            for(j=1;j<=i;j++)
            {
                cout<<x;
                x--;
            }
            x=4;
            cout<<"\n";
        }

    
}