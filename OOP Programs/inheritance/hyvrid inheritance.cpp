//program to show the simple hybrid inheritance

#include<iostream>
#include<conio.h>
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
        cout<<"roll no: "<<r_no<<endl;
    }
};
class test:public student
{
    protected:int part1,part2;
    public:
        void get_m(int x, int y)
        {
          part1 = x; part2 = y;
        }
        void put_m(void)
        {
            cout<<"marks obtained: \n"<<"part 1= "<<part1<<"\n"<<"part 2= "<<part2<<"\n";
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
            cout<<"sports wt: "<<score<<"\n\n";
        }
};
class result:public test,public sports
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
    cout<<"total score: "<<total<<"\n";
}
main()
{
  result  S1;
  S1.get_n(347);
  S1.get_m(30,35);
  S1.get_s(7);
  cout<<"\n\n";
  S1.display();

  return 0;
}
