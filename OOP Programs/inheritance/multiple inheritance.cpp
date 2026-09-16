#include<iostream>
#include<conio.h>
using namespace std;

class father
{
    int age;
    char name[20];
public:
    void get();
    void show();
};
void father::get()
{
    cout<<"your father name please: ";
    cin>>name;
    cout<<"your father age please: ";
    cin>>age;
}
void father::show()
{
    cout<<"my father`s name is: "<<name<<endl<<"my father`s age is: "<<age<<endl;
}
class mother
{
    char name [20];
    int age;
public:
    void get();
    void show();
};
void mother::get()
{
    cout<<"your mother name please: ";
    cin>>name;
    cout<<"your mother age please: ";
    cin>>age;
}
void mother::show()
{
    cout<<"my mother`s name is: "<<name<<endl<<"my mother`s age is: "<<age<<endl;
}
class son:public father, public mother
{
    int stdrd;
    char name[20];
public:
    void get();
    void show();
};
void son::get()
{
    father::get();
    mother::get();
    cout<<"child`s name: ";
    cin>>name;
    cout<<"child`s standard: ";
    cin>>stdrd;
}
void son::show()
{
    father::show();
    mother::show();
    cout<<"child`s name is: "<<name<<endl;
    cout<<"child`s standard: "<<stdrd<<endl;
}
main()
{
    son dl;
    dl.get();
    cout<<"\n\n";
    dl.show();
}
