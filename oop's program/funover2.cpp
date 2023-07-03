#include<iostream>
using namespace std;
class test{
    public:
    void area()
    {
        cout<<"\t area of shape is:"<<endl;
    }
    int area(int side)
    {
        cout<<"\t area of squre:"<<side*side<<endl;
    }
    double area(double red)
    {
        cout<<"\t area of circle:"<<3.14*(red*red)<<endl;
    }
    int area(int width,int height)
    {
        cout<<"\t area of rectangle:"<<width*height<<endl;
    }
    double area(double b,double h)
    {
        cout<<"\t area of triengle:"<<0.5*b*h<<endl;
    }
};
int main()
{
    test t;
    t.area(10);
    t.area(3.4);
    t.area(10,50);
    t.area(2.4,1.2);
}