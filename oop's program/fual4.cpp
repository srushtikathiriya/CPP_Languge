#include<iostream>
using namespace std;
class fualcal{
    int fno;
    float distance,fual;
    string destination;
    int calfual(){
        if(distance<=1000)
        {
            fual=500;
        }
        else if(distance>1000 && distance<=2000)
        {
            fual=1100;
        }
        else{
            fual=2200;
        }
    }
    public:
    void feedifo()
    {
        cout<<"enter flight no:";
        cin>>fno;
        cout<<"enter destination:";
        cin>>destination;
        cout<<"enter distance:";
        cin>>distance;
        calfual();
    }
    void showinfo()
    {
        cout<<"flight no is:"<<fno<<endl;
        cout<<"destination:"<<destination<<endl;
        cout<<"distance:"<<distance<<endl;
        cout<<"fual:"<<calfual()<<endl;
    }
};
int main()
{
    fualcal f;
    f.feedifo();
    f.showinfo();
}