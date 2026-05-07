#include <iostream>
using namespace std;

// Encapsulation
class Marvellous
{
    // Access specifier (By Default Private)

    int No1, NO2; // Characterstics

    void Fun() // Behaivour
    {
        cout << "Inside Fun\n";
    }

    void Gun() // Behaivour
    {
        cout << "Inside Gun\n";
    }
};

int main()
{
    // Object creation (Instance)
    Marvellous mobj1;
    Marvellous mobj2;

    cout << sizeof(mobj1) << "\n"; // 8
    cout << mobj1.No1 << "\n";     //Error
    mobj1.Fun();        //Error
    mobj2.Fun();        //Error
    mobj1.Gun();        //Error
    
    return 0;
}
