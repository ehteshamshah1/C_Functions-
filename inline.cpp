#include <iostream>
using namespace std;

inline int max(int a, int b)
{
	return (a > b) ? a : b;
}

int main()
{
	int a, b;
	cout << "Enter numbers : ";
	cin >> a >> b;
	
	cout << "Maximum number = " << max(a, b);
	
	return 0;
}
