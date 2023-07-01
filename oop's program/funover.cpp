/*polymorphism   ->  compile time
                 ->run time
        1.compile time    ->     function overloading      
                          ->     operator overloading
        2.runtime         ->     function overloading   
                          ->     function over riding   
*/

#include<iostream>
using namespace std;
class test{
    public:
    int work(int a)
    {
        return a*a;
    }
     int work(int a,int b)
    {
       return b%a;
    }
    double work(double a,double b)
    {
       return b-a;
    }
    double work(double a)
    {
       return a+a;
    }
};
int main()
{
    test t;
    cout<<"squre is :"<<t.work(10)<<endl;
    cout<<"addition is :"<<t.work(2.7)<<endl;
    cout<<"rem is :"<<t.work(2,3)<<endl;
    cout<<"sub is :"<<t.work(2.7,3.5)<<endl;

}