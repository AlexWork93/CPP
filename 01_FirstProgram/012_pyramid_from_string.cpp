//Write a C++ program that displays a Letter Pyramid from a user - provided std::string.
//
//Prompt the user to enter a std::string and then from that string display a Letter Pyramid as follows :
//
//It's much easier to understand the Letter Pyramid given examples.
//
//If the user enters the string "ABC", then your program should display :
//
//  A
// ABA
//ABCBA
//
//
//If the user enters the string, "12345", then your program should display :
//
//
//
//    1
//   121
//  12321
// 1234321
//123454321
//
//
//If the user enters 'ABCDEFG', then your program should display :
//
//
//
//      A
//     ABA
//    ABCBA
//   ABCDCBA
//  ABCDEDCBA
// ABCDEFEDCBA
//ABCDEFGFEDCBA

#include <iostream>
#include <string>

using namespace std;

int pyramid_from_string() {
	string user_input;

	cout << "Enter Your string" << endl;
	cin >> user_input;
	for (size_t i{ 0 }; i < user_input.length(); i++) {
		for (size_t j{ 0 }; j < (user_input.length() - i - 1); j++) {
			cout << " ";
		}
		size_t z{ 0 };
		for (; z <= i; z++) {
			cout << user_input.at(z);
		}
		if (i > 0) {
			z -= 1;
			for (; z > 0; z--) {
				cout << user_input[z - 1];
			}
		}
		for (size_t j{ 0 }; j < (user_input.length() - i - 1); j++) {
			cout << " ";
		}
		cout << endl;
	}

	return 0;
}