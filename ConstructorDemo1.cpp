#include <iostream>
using namespace std;

// Encapsulation
class Marvellous
{
    // Access specifier
public:
    int No1, No2; // Characterstics

    // Default Construtor
    Marvellous()
    {
        cout << "Inside default Constructor\n";
        No1 = 0;
        No2 = 0;
    }

    // Paramatriesed Constructor
    Marvellous(int A, int B)
    {
        cout << "Inside Paramatrised Constructor\n";
        No1 = A;
        No2 = B;
    }

    // Copy Constructor
    Marvellous(Marvellous &ref)
    {
        cout << "Inside Copy Construtor\n";
        No1 = ref.No1;
        No2 = ref.No2;
    }


    // Destrustor
    ~Marvellous()
    {
        cout << "Insdie Destructor\n";
    }
};

int main()
{
    cout<<"Inside main\n";
    Marvellous mobj1;       // Default Constructor Object
    Marvellous mobj2(11, 21); // Paramatrised Constructor Object
    Marvellous mobj3(mobj2);  // Copy Constructor Object

    cout <<"End of Main\n";

    return 0;

}   // All Destructors gets called

