//C++ program to explain multiple inheritance
#include<iostream>
using namespace std;
// base class
class Vehicle{
public:
    Vehicle(){cout<<"this is a vehicle\n";}
};
//first sub_class derived from class vehicle 
class FourWheeler:public Vehicle{
    public:
    FourWheeler()
    {
        cout<<"Object with 4 wheels are vehicles\n";
    }
};
//sub class derived from the derived base class FourWheeler
class Car :public FourWheeler{
    public:
    Car()
        {
        cout<<"Car has 4 Wheels\n";
        }
};
int main()
{
    //Creating object of sub class willinvoke the construvtor of base classes.
    Car obj;
    return 0;
}