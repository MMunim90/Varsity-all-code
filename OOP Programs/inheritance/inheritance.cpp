//single inheritance using public derivation

/*#include<bits/stdc++.h>
using namespace std;
class worker
{
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
    cout<<"in my name is: "<<name<<" "<<"in my age is: "<<age<<endl;
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
    cout<<"number of workers under you: ";
    cin>>now;
}
void manager::show()
{
    worker::show();
    cout<<"in no. of workers under me are: "<<now;
}
main()
{
    worker w1;
    manager m1;
    m1.get();
    m1.show();

    return 0;
}*/

//single inheritance using private derivation

/*#include<bits/stdc++.h>
using namespace std;

class worker
{
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
    cout<<"in my name is: "<<name<<" "<<"in"<<"my age is: "<<age<<endl;
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
    cout<<"in no. of worker under me are: "<<now;
}

main()
{
    worker w1;
    manager m1;
    m1.get();
    m1.show();
}*/


//single inheritance using protected derivation

/*#include<bits/stdc++.h>
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
    cout<<"in my name is: "<<name<<"in my age is: "<<age<<endl;
}
class manager:protected worker
{
    int now;
public:
    void get();
    void show();
};
void manager::get()
{
    cout<<"please enter the name in: ";
    cin>>name;
    cout<<"please enter the age in: ";
    cin>>age;
    cout<<"please enter the no. of workers under you: ";
    cin>>now;
}
void manager::show()
{
    cout<<"your name is: "<<name<<" "<<"and age is: "<<age<<endl;
    cout<<"in no. of workers under you are: "<<now;
}
main()
{
    manager ml;
    ml.get();
    cout<<"\n \n";
    ml.show();
}*/

//multilevel inheritance

/*#include<bits/stdc++.h>
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
    cout<<"my name is: "<<name<<"\n"<<"my age is: "<<age<<"\n";
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
    cout<<"no. of worker under me are: "<<now<<"\n";
}
class ceo:public manager
{
    int nom;
public:
    void get();
    void show();
};
void ceo::get()
{
    manager::get();
    cout<<"no. of manager under you: ";
    cin>>nom;
}
void ceo::show()
{
    manager::show();
    cout<<"no. of manager under me are: "<<nom<<"\n";
}
main()
{
    ceo cl;
    cl.get();
    cout<<"\n \n";
    cl.show();
}*/


//multiple inheritance


/*#include<bits/stdc++.h>
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
    cout<<"enter the age: ";
    cin>>age;
}
void father::show()
{
    cout<<"my father's name is: "<<name<<"\t my father's age is:"<<age<<endl;
}
class mother
{
    char name[20];
    int age;
public:
    void get();
    void show();
};
void mother::get()
{
    cout<<"mother's name please: ";
    cin>>name;
    cout<<"mother's age please: ";
    cin>>age;
}
void mother::show()
{
    cout<<"my mother name is: "<<name<<endl;
    cout<<"my mother age is: "<<age<<endl;
}
class son: public father, public mother
{
    char name[20];
    int stdn;
public:
    void get();
    void show();
};
void son::get()
{
    father::get();
    mother::get();
    cout<<"child's name: ";
    cin>>name;
    cout<<"child's standard: ";
    cin>>stdn;
}
void son::show()
{
    father::show();
    mother::show();
    cout<<"child's name is: "<<name<<endl;
    cout<<"child's standard is: "<<stdn<<endl;
}
main()
{
    son s1;
    s1.get();
    s1.show();
}*/


//hierarchical inheritance

/*#include<bits/stdc++.h>
using namespace std;

class father
{
    int age;
    char name[15];
public:
    void get()
    {
        cout<<"father name please: ";
        cin>>name;
        cout<<"father age please: ";
        cin>>age;
    }
    void show()
    {
        cout<<"father's name is: "<<name<<endl;
        cout<<"father's age is: "<<age<<endl;
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
    cout<<"your (son) name please: ";
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
    char name[20];
    int age;
public:
    void get()
    {
        father::get();
        cout<<"your (daughter) name please: ";
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
    son s1;
    daughter d1;
    s1.get();
    d1.get();
    cout<<"\n \n";
    s1.show();
    d1.show();
}*/


//hybrid inheritance


/*#include<bits/stdc++.h>
using namespace std;

class student
{
protected:
    int r_no;
public:
    void get_n(int a)
    {
        r_no=a;
    }
    void put_n(void)
    {
        cout<<"Roll no: "<<r_no<<endl;
    }
};

class test:public student
{
    protected:int part1, part2;
    public:
        void get_m(int x, int y)
        {
            part1 = x;
            part2 = y;
        }
        void put_m(void)
        {
            cout<<"marks obtained: "<<"part 1= "<<part1<<"\n"<<"part 2= "<<part2<<endl;
        }
};
class sports
{
    protected:int score;
    public:
        void get_s(int s)
        {
            score = s;
        }
        void put_s(void)
        {
            cout<<"sports wt.: "<<score<<"\n \n";
        }
};
class result:public test, public sports
{
    int total;
public:
    void display(void);
};
void result::display(void)
{
    total = part1 + part2 + score;
    put_n();
    put_m();
    put_s();
    cout<<"Total score: "<<total<<"\n";
}
main()
{
    result s1;
    s1.get_n(347);
    s1.get_m(30, 35);
    s1.get_s(7);
    s1.display();
}*/
