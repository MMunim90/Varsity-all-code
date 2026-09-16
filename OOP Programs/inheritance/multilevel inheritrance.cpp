#include<iostream>
#include<conio.h>
using namespace std;

class worker
{
    int age;
    char name[20];
public:
    void get();
    void show();
};
void worker::get()
{
    cout<<"your name please: ";
    cin>>name;
    cout<<"your age please: ";
    cin>>age;
}
void worker::show()
{
    cout<<"my name is: "<<name<<endl<<"my age is: "<<age<<endl;
}
class manager:public worker
{
    int now;
public:
    void get();
    void show();
};
void manager::get()
{
    worker::get();
    cout<<"no. of workers under you: ";
    cin>>now;
}
void manager::show()
{
    worker::show();
    cout<<"no of workers under me are: "<<now;
}
class ceo:private manager
{
    int nom;
public:
    void get();
    void show();
};
void ceo::get()
{
    manager::get();
    cout<<"no of manager under you are:";
    cin>>nom;
}
void ceo::show()
{
    cout<<"the no of managers under me are: "<<nom<<endl;
}
main()
{
    manager al;
    al.get();
    cout<<"\n\n";
    al.show();
    cout<<"\n\n";
    ceo cl;
    cl.get();
    cout<<"\n\n";
    cl.show();
}
