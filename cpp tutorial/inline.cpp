#include <iostream>
using namespace std;
int exforsys(int);
int main ()
{
    int x;
    cout<<"n Enter the Input Value:";
    cin>>x;
    cout<<"n The Output is:"<<exforsys(x);
    return 0;   

}


 int exforsys(int x1)
{
    return 5*x1;
}