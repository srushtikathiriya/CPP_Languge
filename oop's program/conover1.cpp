#include<iostream>
using namespace std;
class volum
{
    public:
    volum(int a,int b,int c){
        cout<<"rectangular or cuboid volum:"<<a*b*c<<endl;
    }
    volum(int a,double b,int c){
        cout<<"square or rectangular pyramid volum:"<<(4/3)*3.14*a*b*c<<endl;
    }
    volum(int a,int b,double c){
        cout<<"ellipsoid volum:"<<(4/3)*3.14*a*b*c<<endl;
    }
    volum(int a){
        cout<<" cube volum:"<<a*a*a<<endl;
    }
    volum(double a){
        cout<<"sphere volum:"<<(4/3)*3.14*(a*a*a)<<endl;
    }
    volum(int a,int b){
        cout<<"cylinder volum:"<<3.14*(a*a)*b<<endl;
    }
    volum(double a,double b){
        cout<<"pyramid volum:"<<0.33*a*b<<endl;
    }
    volum(int a,double b){
        cout<<"right circular clon volum:"<<0.33*3.14*(a*a)*b<<endl;
    }
    volum(double a,int b){
        cout<<"prism volum:"<<a*b<<endl;
    }
};
int main()
{
    volum a(7,6,8),b(6,3.4,8),c(5,7,4.6),d(2),e(5.5),f(8,9),g(4.3,6.5),h(7,8,9),i(6.5,8);
}