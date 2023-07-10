#include<iostream>
using namespace std;
class base1
{
    protected:
    int n;
    public:
    void setN()
    {
        cout<<"enter n:";
        cin>>n;
    }
};
class base2
{
    protected:
    int i;
};
class derived : public base2,public base1
{
    public:
    void product()
    {
    for(i=1;i<=n;++i)
        {
            cout<<"square of num is "<< i <<" : "<<i*i<<endl;
        }
    }
};
int main()
{
    derived d;
    d.setN();
    d.product();
}
