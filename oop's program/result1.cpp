#include<iostream>
using namespace std;
class student{
    int admno;
    char sname[20];
    float eng,maths,sci,total;
    float ctotal()
    {
        return eng+maths+sci;
    }
    public:
    void takedata()
    {
        cout<<"enter admin no:";
        cin>>admno;
        cout<<"enter sname:";
        cin>>sname;
        cout<<"enter eng marks:";
        cin>>eng;
        cout<<"enter maths marks:";
        cin>>maths;
        cout<<"enter sci marks:";
        cin>>sci;
        total=ctotal();
    }
    void showdata()
    {
        cout<<"admno:"<<admno<<endl;
        cout<<"sname:"<<sname<<endl;
        cout<<"eng marks:"<<eng<<endl;
        cout<<"maths marks:"<<maths<<endl;
        cout<<"sci marks:"<<sci<<endl;
        cout<<"total marks:"<<total<<endl;
    }
};
int main()
{
    student s;
    s.takedata();
    s.showdata();
}