#include <iostream>
using namespace std;

class Demo 
{
    public :
        int i;
    private :
        int j;
    protected :
        int k;

    public:         // writing this is important if we not then the constructor will come under the protected access specifier
    Demo ()
    {
        int i = 10;
        int j = 20;
        int k = 30;
    }

    void Display ()
    {
        cout<<"value of i :"<<i<<"\n";  // Allowed
        cout<<"value of j :"<<j<<"\n";  // Allowed
        cout<<"value of k :"<<k<<"\n";  // Allowed
    }
};

int main ()
{
    Demo dobj;
    dobj.Display();
    cout<<"value of i :"<<dobj.i<<"\n";  // Allowed , while calling them in main we should write the caller object dobj
    cout<<"value of j :"<<dobj.j<<"\n";  // Not Allowed
    cout<<"value of k :"<<dobj.k<<"\n";  // Not Allowed

    return 0;
}