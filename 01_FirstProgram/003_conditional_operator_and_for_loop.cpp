#include <iostream>
#include <vector>

using namespace std;



int main() {

	for (int i{ 1 }; i <= 100; i++) {
		cout << i;
		cout << ((i % 10 == 0) ? "\n" : " ");
	}

	cout << "====================\nwith vectors\n====================" << endl;

	vector<int> some_nums{ 10,20,30,40 };

	for (int i{ 0 }; i < some_nums.size(); i++) {
		cout << "this is an element with index: " << i << " - " << some_nums.at(i) << endl;
	}


	cout << "====================\nsum of odd numbers\n====================" << endl;

	int sum{ 0 };

	for (int i{ 0 }; i <= 15; i++) {
		sum += ((i % 2 == 0) ? 0 : i);
		cout << sum << " " << i << endl;
	}

	return 0;
}
