#include <iostream>
using namespace std;

// call by pointers

void swapNumbers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    cout << "Enter numbers: ";
    cin >> a >> b;

    cout << "\nBefore Swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swapNumbers(&a, &b);
    
    cout << "\nAfter Swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
