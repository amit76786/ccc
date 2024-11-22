 //copy constructor
#include<iostream>
using namespace std;
class AB
{
public:
int x;
AB(int a)       //parameterized constructor.
{
    x=a;
}
AB(AB &obj)     //copy constructor
    {
        x=obj.x;
    }
};
int main()
{
AB a1(20);      //Calling the parameterized constructor.
AB a2(a1);        //Calling the copy constructor.
cout<<a2.x;
return 0;
}
