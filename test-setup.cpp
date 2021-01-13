// Tests the compiler and IDE setup. Checks specifically for C++17 features.

#include <iostream>
#include <string>
#include <memory>

using namespace std;

// Returning multiple values from a function using a tuple
tuple<string, int, char> get_student_details() {
	return {"Homer Simpson", 234556, 'F'};
	}

int main()
{
    auto x = make_unique<int>(7); // If you have a compiler error here check that the C++17 switch is enabled: --std=c++17
    // The line above creates a smart pointer to the value 7. This will be covered later in the course.

    string number;
    cout << "Type in an integer: ";
    cin >> number;
    cout << "You typed: " << number << endl;

    // The functions "to_string" and "stoi", in use below, are very handy when dealing with user input.
    // You can find out more details about how they work at the following urls.
    // http://www.cplusplus.com/reference/string/to_string/
    // http://www.cplusplus.com/reference/string/stoi/
	cout << "Your number plus 5 equals " << to_string(stoi(number) + 5) << endl << endl;
	
	// New C++ 17 feature: variable initialisation within an 'if' statement. The scope of the
	// variable is limited to the 'if' statement's scope.
	auto my_string = "Hello World"s;
	if (auto position = my_string.find("Hello"); position != string::npos)
    cout << "\"Hello\" found at position: " << position << endl << endl;

	// New C++17 feature: capturing multiple return values from a function using a tuple and structured binding
 	auto [student, student_number, grade] = get_student_details();
	cout << "Student: " << student << endl << "Student Number:" << student_number << endl;
	cout << "Grade: " << grade << endl << endl;

    return 0;
}
