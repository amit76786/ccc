#include <iostream>
using namespace std;

class A{
    int x;
        public:
        A() {}
        A(int i){
            x=1;
        }
        void operator+(A);
        void operator++(int);
        void operator++();
        void display();
  };
  void A:: operator (A a) {
    int m = x + a.x;
    cout<<"the result of the addition of two object is :"<< m <<endl;
  }

  void A:: operator++(int) {
    //x=1;
    x++;
  }

  void A::operator++() {
    //x=1;
    ++x;
  }

    void A::display() {
        cout <<"the value of x is :"<< x <<endl;
    }

    int main() {
        A a1(5);
        A a2(4);
        a1 + a2;

    A o(9);
    ++o;
    o++;
    o.display();

    return 0;
    }
