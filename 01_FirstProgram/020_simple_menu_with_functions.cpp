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
#include <string>
#include <vector>
using namespace std;


void print_menu();
void read_user_input(string& user_input);
void select_a_function(string& user_input, vector<int>& vec);
void print_numbers(vector<int>& vec);
void add_numbers(vector<int>& vec);
void mean_of_numbers(vector<int>& vec);
void smallest_of_numbers(vector<int>& vec);
void largest_of_numbers(vector<int>& vec);

void print_numbers(vector<int>& vec) {
	for (size_t i{ 0 }; i < vec.size(); i++) {
		cout << vec.at(i) << " ";
	}
	cout << endl;
}

void add_numbers(vector<int>& vec) {
	int res{ 0 };
	for (auto i : vec) {
		res += i;
	}
	cout << "Sum of numbers is: " << res << endl;
}
void mean_of_numbers(vector<int>& vec) {
	int res{ 0 };
	for (size_t i{ 0 }; i < vec.size(); i++) {
		res += vec.at(i);
	}
	res = res / vec.size();
	cout << "Mean of numbers is: " << res << endl;
}
void smallest_of_numbers(vector<int>& vec) {
	int res{ vec.at(0)};
	for (auto i : vec) {
		if (i < res) {
			res = i;
		}
	}
	cout << "The smallest is: " << res << endl;
}
void largest_of_numbers(vector<int>& vec) {
	int res{ vec.at(0)};
	for (auto i : vec) {
		if (res < i) {
			res = i;
		}
	}
	cout << "The biggest is: " << res << endl;
}

void select_a_function(string& user_input, vector<int>& vec) {
	if (user_input == "P") {
		cout << "you selected: " << user_input << " - Print numbers" << endl;
		print_numbers(vec);
	} else if (user_input == "A") {
		cout << "you selected: " << user_input << " - Add numbers" << endl;
		add_numbers(vec);
	}
	else if (user_input == "M") {
		cout << "you selected: " << user_input << " - Display mean of the numbers" << endl;
		mean_of_numbers(vec);
	}
	else if (user_input == "S") {
		cout << "you selected: " << user_input << " - Display the smallest of the numbers" << endl;
		smallest_of_numbers(vec);
	}
	else if (user_input == "L") {
		cout << "you selected: " << user_input << " - Display the largest of the numbers" << endl;
		largest_of_numbers(vec);
	}
	else if (user_input == "Q") {
		cout << "you selected: " << user_input << " - Quit" << endl;
		cout << "Bye.." << endl;
	}
	else {
		cout << "wrong input" << endl;
	}
}


void print_menu() {
	cout << "main menu" << endl;
	cout << "P - Print numbers" << endl;
	cout << "A - Add numbers" << endl;
	cout << "M - Display mean of the numbers" << endl;
	cout << "S - Display the smallest of the numbers" << endl;
	cout << "L - Display the largest of the numbers" << endl;
	cout << "Q - Quit" << endl;
}

void read_user_input(string& user_input) {
	cin >> user_input;
	for (size_t i{ 0 }; i < user_input.size(); i++) {
		user_input.at(i) = toupper(user_input.at(i));
	}
}

int start() {

	string user_input;
	vector<int> nums{ 10, 20, 30, 40, 50, 60, 70, 80, 90 };

	do {
		print_menu();
		read_user_input(user_input);
		select_a_function(user_input, nums);
	} while (user_input != "Q");

	return 0;
}