#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
	return a + b + c;
}

double sum(double a, double b)
{
    return a + b;
}

double sum(int a, double b)
{
    return a + b;
}

int main()
{
    cout << "sum(int, int) = " << sum(4, 2) << endl;
    
    cout << "sum(int, int, int) = " << sum(4, 3, 5) << endl;

    cout << "sum(double, double) = " << sum(4.5, 2.3) << endl;

    cout << "sum(int, double) = " << sum(3, 4.7) << endl;

    return 0;
}
