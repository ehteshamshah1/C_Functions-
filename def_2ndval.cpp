#include <iostream>
using namespace std;

// Function Prototype
int calculator(int a, int b = 0);

int main()
{
    cout << "calculator(10) = " << calculator(10) << endl;
    cout << "calculator(10, 5) = " << calculator(10, 5) << endl;

    return 0;
}

// Function Definition
int calculator(int a, int b)
{
    return a + b;
}
