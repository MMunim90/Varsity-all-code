/*#include<bits/stdc++.h>
using namespace std;


class opratoroverloadingexample
{
private:
    int myvar;
public:
    opratoroverloadingexample(): myvar(8){}
    void operator++()
    {
        myvar = myvar + 20;
    }
    void display()
    {
        cout<<"the updated value is: "<<myvar;
        cout<<"\n \n";
    }
};

int main()
{
    opratoroverloadingexample obj;
    ++obj;
    obj.display();
    return 0;
}*/


/*#include<iostream>
using namespace std;

class convertfloat
{
    int dividend, divisor;
public:
    convertfloat(int D, int d)
    {
        dividend = D;
        divisor = d;
    }
    operator float() const
    {
        return float(dividend) / float(divisor);
    }
};
int main()
{
    convertfloat f(5, 9);
    float result = f;
    cout<<result;
    cout<<"\n \n";
    return 0;
}*/


//The constructors that have a single argument act as a conversion operator as well.

/*#include<iostream>
using namespace std;

class coordinates
{
private:
    int x1, y1;
public:
    coordinates(int x_coord = 0, int y_coord = 0)
    {
        x1 = x_coord;
        y1 = y_coord;
    }
    void displaycoordinates()
    {
        cout<<"\n";
        cout<<"the x-coordinate= "<<x1<<", the y-coordinate= "<<y1;
        cout<<"\n \n";
    }
};

int main()
{
    coordinates point(100, 100);
    point.displaycoordinates();
    point = 30;
    point.displaycoordinates();
    return 0;
}*/


//The following program illustrates run-time polymorphism using function overriding


/*#include<iostream>
using namespace std;

class bird
{
public:
    void display()
    {
        cout<<"i am the display function of the base class";
        cout<<"\n \n";
    }
};
class parrot:public bird
{
    public:
        void display()
        {
            cout<<"i am the display function of the derived class";
            cout<<"\n \n";
        }
};

int main()
{
    bird b;
    parrot p;
    b.display();
    p.display();
}*/


//The following program illustrates run-time polymorphism using function overriding

#include<bits/stdc++.h>
using namespace std;

class bird
{
public:
    virtual void display()
    {
        cout<<"this is display in bird class."<<"\n \n";
    }
    void print()
    {
        cout<<"this is show in bird class."<<"\n \n";
    }
};
class parrot:public bird
{
public:
    void display()
    {
        cout<<"this is the display in parrot class."<<"\n \n";
    }
    void print()
    {
        cout<<"this is show in parrot class."<<"\n \n";
    }
};

int main()
{
    bird* brd;
    parrot p;
    brd = &p;
    brd->display();
    brd->print();
}
