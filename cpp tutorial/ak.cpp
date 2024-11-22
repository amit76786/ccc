//employee salary
#include<iostream>
using namespace std;
class Employee{
private:
        int sal ;
public:
        void set_sal(int s)
    {sal=s;
    }
    int display()
    {return sal;
    }
};
int main() 
    {
        Employee emp1;
        emp1.set_sal(3000);
        cout<<emp1.display();
        return 0 ;
    }