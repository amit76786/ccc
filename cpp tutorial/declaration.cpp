#include<iostream>
using namespace std;
 class A                 //base class declaration.
{
    int a;
    public:
    void display()
    {
        cout<<"Class A";
    }
};
class B : public A           //derived class declaration.
{
    int b;
    public:
    void display()
        {
            cout<<"Class B";
        }
    
    
};
int main(void)
{
   B obj1;
   obj1.display();
   return 0;
}