#include <iostream>
using namespace std;
int main()
{
    int x=-1;           //Some code
cout<<"Before try\n";
try{
    cout<<"Inside try\n";
    if(x<0)
    {
        throw x;
        cout<<"After throw(Never ececuted)\n";

    }
}
catch(char*excp)    //catch(int x)
{ 
    cout<<"Exception Caught\n";

}
   catch(...){     
    cout<<"After catch(Will be executed)\n";
   }54
    return 0;
  
}