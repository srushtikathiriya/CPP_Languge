#include<iostream>
using namespace std;
int main()
{
    int x;
    for(x=1;x<=10;x++)
    {
        if(x%2!=0)
        {
            cout<<x;
        }
        else
        {
            cout<<x*x;
        }
        cout<<"\n";
    }
}