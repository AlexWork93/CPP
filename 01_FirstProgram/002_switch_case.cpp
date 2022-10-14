#include <iostream>
using namespace std;

int switch_case_lesson() {

	enum Directions
	{
		left = 'l',
		right = 'r',
		up = 'u',
		down = 'd'
	};

	Directions direction{ left };
	char temp{};
	cout << "Enter a Direction " << endl;
	cout << "l left" << endl;
	cout << "r right" << endl;
	cout << "u up" << endl;
	cout << "d down" << endl;

	cin >> temp;

	switch (Directions(temp)) {
	case left:
		cout << "Your choise is left" << endl;
		break;
	case right:
		cout << "Your choise is right" << endl;
		break;
	case up:
		cout << "Your choise is up" << endl;
		break;
	case down:
		cout << "Your choise is down" << endl;
		break;
	default:
		cout << "Your choise is wrong" << endl;

	}


	return 0;
}