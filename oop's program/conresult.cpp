#include<iostream>
using namespace std;
class result{
    int rno,eco,ba,eng,total;
    char name[20];
    float per;
    public:
    result(){
        cout<<"enter roll no:";
        cin>>rno;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter eco:";
        cin>>eco;
        cout<<"enter ba:";
        cin>>ba;
        cout<<"enter eng:";
        cin>>eng;
        calcul();
    }
    calcul(){
        total=eco+ba+eng;
        per=(float)total/3;
        disp();
    }
    void disp()
    {
        cout<<"\n";
        cout<<"roll no is:"<<rno<<endl;
        cout<<"name is:"<<name<<endl;
        cout<<"eco marks is:"<<eco<<endl;
        cout<<"ba marks is:"<<ba<<endl;
        cout<<"eng is:"<<eng<<endl;
        cout<<"total marks is:"<<total<<endl;
        cout<<"your percentage is:"<<per<<endl;
    }
};
int main()
{
    result r;
}