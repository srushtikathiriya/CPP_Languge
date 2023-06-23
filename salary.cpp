#include<iostream>
using namespace std;
int main()
{
    int salary,hra,da,gross;
    cout<<"enter the salary:";
    cin>>salary;
    if(salary<=5000)
    {
        hra=salary*0.08;
        da=salary*0.20;
    }
    else if(salary<=10000)
    {
        hra=salary*0.12;
        da=salary*0.30;
    }
    else if(10000<salary&&salary<15000)
    {
        hra=salary*0.15;
        da=salary*0.40;
    }
    else
    {
        hra=salary*0.20;
        da=salary*0.50;
    }
    gross=salary+hra+da;
    cout<<"gross salary:"<<gross;
}