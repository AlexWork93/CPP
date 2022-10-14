// This challenge is about using a collection (list) of integers and allowing the user
// to select option from a menu to perform operations on the list

// Your program should display a menu options to the user as follows:

// P - Print numbers
// A - Add numbers
// M - Display mean of the numbers
// S - Display the smallest of the numbers
// L - Display the largest of the numbers
// Q - Quit


#include <iostream>
#include <vector>

using namespace std;


int simple_menu() {

	vector<int> nums{ 10, 20, 30, 40, 50, 60, 70, 80, 90 };
	char input{};

	do {
		double result{ 0 };
		cout << "Main Menu" << endl;
		cout << "P - Print numbers" << endl;
		cout << "A - Add numbers" << endl;
		cout << "M - Display mean of the numbers" << endl;
		cout << "S - Display the smallest of the numbers" << endl;
		cout << "L - Display the largest of the numbers" << endl;
		cout << "Q - Quit" << endl;
		cin >> input;

		switch (input) {
		case 'p':;
		case 'P': {
			cout << "Print numbers" << endl;
			for (auto num : nums) {
				cout << num << " ";
			}
			cout << endl;
			break;
		}

		case 'a':;
		case 'A': {
			cout << "Add numbers" << endl;
			for (auto num : nums) {
				result += num;
			}
			cout << result << endl;
			break;
		}

		case 'm':;
		case 'M': {
			cout << "Display mean of the numbers" << endl;
			for (auto num : nums) {
				result += num;
			}
			cout << result / nums.size() << endl;
			break;
		}

		case 's':;
		case 'S': {
			cout << "Display the smallest of the numbers" << endl;
			result = nums.at(0);
			for (auto num : nums) {
				if (num < result)
					result = num;
			}
			cout << result << endl;
			break;
		}

		case 'l':;
		case 'L': {
			cout << "Display the largest of the numbers" << endl;
			result = nums.at(0);
			for (auto num : nums) {
				if (num > result)
					result = num;
			}
			cout << result << endl;
			break;
		}

		case 'q':;
		case 'Q': {
			cout << "Good bye.." << endl;
			break;
		}

		default:
			cout << "Incorrect input" << endl;
		}

	} while (input != 'q' && input != 'Q');

	return 0;
}