#include <iostream>
using namespace std;
class student {
	int rno;
	char name[10];
public:
	student()
	{
		cout << "Enter the RollNo:";
		cin >> rno;
		cout << "Enter the Name:";
		cin >> name;
	}
     void display()
	{
		cout << endl << rno << "\t" << name << "\t";
	}
};
int main()
{
	student s; 
	s.display();

	return 0;
}
       
