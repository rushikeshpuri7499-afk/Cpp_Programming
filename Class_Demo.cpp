#include<iostream>;
using namespace std;
class demo 
{
    public :                                    //access specifier
        int i;                                     
        float f;
};

int main()

{
    demo dobj ;

    cout<<sizeof (dobj) <<"\n";         // 8

    return 0;
}