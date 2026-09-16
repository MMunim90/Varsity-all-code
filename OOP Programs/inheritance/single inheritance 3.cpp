// single inheritance using protected derivation

#include<iostream>
#include<conio.h>
using namespace std;

class worker
{
protected:
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
    cout<<"my name is: "<<name<<endl<<"my age is"<<age<<endl;
}
 class manager:protected worker
{
    int now;
    char name[10];
public:
    void get();
    void show();
};
void manager::get()
{
    cout<<"please enter the name: ";
    cin>>name;
    cout<<"please enter the age: ";
    cin>>age;
    cout<<"please enter the no. of workers under you: ";
    cin>>now;
}
void manager::show()
{
    cout<<"your name is: "<<name<<endl<<"and age is: "<<age<<endl;
    cout<<"no of workers under you are: "<<now<<endl;
}
main()
{
    manager ml;
    ml.get();
    cout<<"\n\n";
    ml.show();
}
