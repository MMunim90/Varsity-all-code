//program to show the hierarchical inheritance

#include<iostream>
#include<conio.h>
using namespace std;

class father
{
    int age;
    char name[15];
public:
    void get()
    {
        cout<<"father`s name please: ";
        cin>>name;
        cout<<"father`s age please: ";
        cin>>age;
    }
    void show()
    {
        cout<<"father`s name is: "<<name<<endl;
        cout<<"father`s age is: "<<age<<endl;
    }
};
class son:public father
{
    char name[20];
    int age;
public:
    void get();
    void show();
};
void son::get()
{
    father::get();
    cout<<"your(son)name please: ";
    cin>>name;
    cout<<"your age please: ";
    cin>>age;
}
void son::show()
{
    father::show();
    cout<<"my name is: "<<name<<endl;
    cout<<"my age is: "<<age<<endl;
}
class daughter:public father
{
    char name[15];
    int age;
public:
    void get()
    {
        father::get();
        cout<<"your(daughter)name please: ";
        cin>>name;
        cout<<"your age please: ";
        cin>>age;
    }
    void show()
    {
        father::show();
        cout<<"my name is: "<<name<<endl;
        cout<<"my age is: "<<age<<endl;
    }
};
main()
{
    son S1;
    daughter D1;
    S1.get();
    D1.get();
    cout<<"\n\n";
    S1.show();
    D1.show();
}
