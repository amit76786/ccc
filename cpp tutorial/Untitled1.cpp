//salary of 2 or more employee
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
        cout << " salary of amit kumar emp1   :      ";
        cout<<emp1.display();

        cout<<  "\n";

    
        Employee emp2;
        emp2.set_sal(4000);
        
        cout << " salary of ankit kumar emp2    :     ";
        cout<<emp2.display();
        cout<<  "\n";
        

         Employee emp3;
        emp3.set_sal(40000);
        
        cout << " salary of aniket  emp3   :     ";
        cout<<emp3.display();
        return 0;
    }
