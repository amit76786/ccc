// Create an object of Car like speed 
#include<iostream>
using namespace std;

class Car{
    public:
int speed(int maxSpeed);
};
int Car::speed(int maxSpeed){
    return maxSpeed;
}
int main()
{
    Car myObj;// Create an object of Car
    cout<<myObj.speed(200);//Call the method with an argument
    return 0; 
}
