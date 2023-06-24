#include<iostream>
using namespace  std;
int main()
{
    int unit;
    float bill,surcharge;
    cout<<"enter val of unit:";
    cin>>unit;
    if(unit<=100)
    {
        bill=50+unit*0.6;
    }
    else if(unit<=300)
    {
        bill=50+60+(unit-100)*0.8;
    }
    else
    {
        bill=50+60+160+(unit-300)*0.9;
    }
    cout<<"your bill amt is:"<<bill;
    if(bill>=300)
    {
        surcharge=(float)bill*0.15;
        bill=(float)bill+surcharge;
        cout<<"\n your surcharge is:"<<surcharge;
        cout<<"\n your final bill amt:"<<bill;
    }
}