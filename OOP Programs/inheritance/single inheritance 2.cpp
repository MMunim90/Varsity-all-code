//the single inheritance by private derivation


#include<iostream>
#include<conio.h>
using namespace std;
class worker
{
private:
    int age;
    char name[10];
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
class manager:worker
{
    int now;
public:
    void get();
    void show();
};
void manager::get()
{
    worker::get();
    cout<<"number of worker under you: ";
    cin>>now;
}
void manager::show()
{
    worker::show();
    cout<<"no. of worker under me are: "<<now<<endl;
}
main()
{
    worker wl;
    manager ml;
    ml.get();
    cout<<"\n\n";
    ml.show();

    return 0;
}
