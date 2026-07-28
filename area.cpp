#include <iostream>
using namespace std;

double area(double radius)
{
    const double PI = 3.14159;
    return PI * radius * radius;
}

int main()
{
    double radius;
    cout << "Enter radius: ";
    cin >> radius;

    cout << "Area of circle = " << area(radius) << endl;

    return 0;
}
