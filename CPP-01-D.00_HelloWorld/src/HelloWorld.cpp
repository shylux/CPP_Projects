///////////////////////////////////////////////////////////////////////////////
// CPP-01.00D: "Hello World" C++ Version                                     //
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;

	// output message
	cout << "Please Enter Your Name: ";

	// get name string
	cin >> str;

	// output hello message
	cout << "Hello, " << str << "!" << endl;

	return 0;
}
