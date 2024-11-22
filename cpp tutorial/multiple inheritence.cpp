//C++ program to explain multiple inheritance
#include<iostream>
using namespace std;
//first base class
class Vehicle{
public:
    Vehicle(){cout<<"this is a vehicle\n";}
};
//second base class
class FourWheeler{
    public:
    FourWheeler()
    {
        cout<<"this is a 4 Wheeler Vehicle\n";
    }
};
//sub class derived from two base classes 
class Car :public Vehicle,public FourWheeler{};
//main function 
int main()
{
    //Creating object of sub class will 
    //invoke the constructor of base classes.
    Car obj;
    return 0;
}
