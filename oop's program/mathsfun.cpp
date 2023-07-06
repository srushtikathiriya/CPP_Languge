/*
    ceil()->round up value->3.9=4/3.2=4
    floor()->round down value
    round()->rounded value
    abs()->absolute value
    sqrt()->square root
    pow(x,y)->x to power y
    rand()->random value generate
*/

#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
    cout<<"ans a:"<<ceil(3.2)<<endl;
    cout<<"ans a:"<<ceil(-3.8)<<endl;
    cout<<"ans b:"<<floor(3.2)<<endl;
    cout<<"ans b:"<<floor(3.8)<<endl;
    cout<<"ans c:"<<round(13.2)<<endl;
    cout<<"ans c:"<<round(-3.8)<<endl;
    cout<<"ans d:"<<abs(13.2)<<endl;
    cout<<"ans d:"<<abs(-3.8)<<endl;
    cout<<"ans e:"<<sqrt(16)<<endl;
    cout<<"ans e:"<<sqrt(5)<<endl;
    cout<<"ans f:"<<pow(2,6)<<endl;
    cout<<"ans g:"<<rand()%10<<endl;
}
