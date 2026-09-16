#include<bits/stdc++.h>
using namespace std;
class functionoverloadingexample
{
public:
    void myfunc(int a)
    {
        cout<<"a= "<<a<<"\n \n";
    }
    void myfunc(double a)
    {
        cout<<"a= "<<a<<"\n \n";
    }
    void myfunc(int a, int b)
    {
        cout<<"a= "<<a<<",b= "<<b<<"\n \n";
    }
};

int main()
{
    functionoverloadingexample obj;
    obj.myfunc(10);
    obj.myfunc(10.20);
    obj.myfunc(100, 200);
    return 0;
}
