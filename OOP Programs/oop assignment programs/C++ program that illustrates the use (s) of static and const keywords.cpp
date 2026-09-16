#include <bits/stdc++.h>
using namespace std;

class hello{
public:
    static void function()
    {
        cout<<"This is a static function\n"<<endl;
    }
};

 class munim{
 int value;
 public:
     munim(int x){
     value = x;
     }
     int getValue() const {
     return value;
     }
 };

int main()
{
    hello::function();

    munim m1(33);
    munim m2(99);
    cout<<"This is Constant Function"<<endl;
    cout<<"The value using object m1: "<<m1.getValue()<<endl;
    cout<<"The value using object m2: "<<m2.getValue()<<endl;

    return 0;
}
