#include <iostream>
using namespace std;

class Student{
	private:
		string name;
		int marks;
	public:
		Student(string n, int m)
		{
			name = n;
			marks = m;
		}
		
		friend void display(Student s);
};

void display(Student s)
{
	cout << "Student name = " << s.name << endl;
	cout << "Student marks = " << s.marks << endl;
}

int main()
{
	Student s1("Ali", 88);
	display(s1);
	
	return 0;
}
