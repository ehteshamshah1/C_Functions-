#include <iostream>
using namespace std;

void printArray(const int arr[], int size)
{
	for (int i=0; i<size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int arr[] {10, 20, 30, 40, 50};
	int size = 5;
	
	printArray(arr, size);
	
	return 0;
}
