#include <iostream>
using namespace std;

class Shape
{
private:
    double area;

public:
    Shape(double a)
    {
        area = a;
    }

    friend void addAreas(Shape s1, Shape s2);
};

void addAreas(Shape s1, Shape s2)
{
    cout << "Total Area = " << s1.area + s2.area << endl;
}

int main()
{
    Shape circle(22);
    Shape square(10);

    addAreas(circle, square);

    return 0;
}
