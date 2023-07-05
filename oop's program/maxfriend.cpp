#include<iostream>
using namespace std;
class box{
    int x,y;
    public:
    void input()
    {
        cout<<"enter a:";
        cin>>x;
        cout<<"enter b:";
        cin>>y;
    }
    friend void find(box t);
};
void find(box t)
{
    if(t.x>t.y)
    {
        cout<<"largest num is a:"<<t.x<<endl;
    }
    else{
        cout<<"largest num is b:"<<t.y<<endl;

    }
}
int main()
{
    box c;
    c.input();
    find(c);
}