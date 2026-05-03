#include <iostream>
using namespace std;
class demo
{
public:
    int i;   // characterstics
    float f; // characterstics

    void fun() // behaivour
    {
        cout << "insidefun\n";
    }
};

int main()

{
    demo dobj;

    cout << sizeof(dobj) << "\n"; // 8

    return 0;
}