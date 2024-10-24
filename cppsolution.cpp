// Describe the problem here.

// The authors' names here.

// Describe in detail how/where to run the code.
// Run code at https://www.onlinegdb.com/online_c++_compiler

// Be sure to include all needed libraries

#include<iostream>
using namespace std;

bool myfunction(bool myparameter) {
    cout << "put your testable code here" << endl;  // Be sure to document well!
    return(true); // Be sure to make responses testable via unit tests
}

int main() // Test all cases from main, explaining your testing coverage
{
    cout << "test your code here" << endl;
	if (myfunction(true)){
		cout << "test result success" << endl;
	}
	else{
		cout << "test result failure" << endl;
	}
    return 0;
}
