#include<iostream>
#include<iomanip>
using namespace std;
class result{
    private:
    int eco,eng,stat,total;
    float per;
    public:
    void setter()
    {
        cout<<"enter eco marks:";
        cin>>eco;
        cout<<"enter eng marks:";
        cin>>eng;
        cout<<"enter stat marks:";
        cin>>stat;
        cal();
    }
    void cal()
    {
        total=eco+eng+stat;
        per=(float)total/3;
    }
    void getter()
    {
        cout<<"\n";
        cout<<"eco:"<<eco<<endl;
        cout<<"eng:"<<eng<<endl;
        cout<<"stat:"<<stat<<endl;
        cout<<"total:"<<total<<endl;
        cout<<"per:"<<setprecision(4)<<per<<endl;
    }
};
int main()
    {
        result z;
        z.setter();
        z.getter();
    }
