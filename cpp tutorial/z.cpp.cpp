#include<iostream>
using namespace std;
class A
{
	int x=5;
	public:
		virtual void display()
		{
			std::cout<<"Value of x is:"<<x<<std::endl;
			
		}
};
class B:public A
{
	public:
		void display()
		{
	    
			cout<<"Derived Class is invoked"<<endl;	
		}
};
int main()
{
	A*a; //base class pointer
	B b; //derived class object
	a=&b;
	a->display();
	return 0;
}
