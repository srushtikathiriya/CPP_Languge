#include<iostream>
using namespace std;
class test
{
    int testcode;
    string description;
    int nocandidate;
    int calcntr()
    {
        return(nocandidate/100+1);
    }
    public:
    void schedule()
    {
        cout<<"enter testcode:";
        cin>>testcode;
        cout<<"enter description:";
        cin>>description;
        cout<<"enter nocandidate:";
        cin>>nocandidate;
        calcntr();
    }
    void disptest()
    {
        cout<<"testcode:"<<testcode<<endl;
        cout<<"description:"<<description<<endl;
        cout<<"nocandidate:"<<nocandidate<<endl;
        cout<<"number of centers:"<<calcntr()<<endl;
    }
};
int main()
{
    test t;
    t.schedule();
    t.disptest();
}