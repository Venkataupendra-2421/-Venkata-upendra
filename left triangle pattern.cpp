
#include <iostream>
using namespace std;

int main()
{
	int rows, columns, n;
	{
		cout<<"enter the value";
		cin>>n;
	}

	
	for (rows = 1; rows <= n; rows++) {

	
		for (columns = 1; columns <= rows; columns++) {

			
			cout << rows << " ";
		}
		
		cout << "\n";
	}
	return 0;
}

