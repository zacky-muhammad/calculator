#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

// Main code
int main()
{
    float A,Z, Results;
    char Operator;

    // Main page with code
    cout << "-Trial calculator || Inhabitant.org" << endl;
    cout << "\n\n";

    // C0UM1
    cout << "First number : ";
    cin >> A;
    cout << "Select an operator : ";
    cin >> Operator;
    cout << "Second number : ";
    cin >> Z;

    switch (Operator)
    {
        case '*' : Results = A * Z;
        break;
        case '/' : Results = A / Z;
        break;
        case '+' : Results = A + Z;
        break;
        case '-' : Results = A - Z;
        break;
        default : cout << "Error!\n";
    }
    cout << "Results : " << Results << endl;

    cin.get();
    return 0;
}
