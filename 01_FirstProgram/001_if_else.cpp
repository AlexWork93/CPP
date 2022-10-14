#include <iostream>
#include <vector>

using namespace std;

int if_else_lesson() {

	vector <double> dimensions_of_luggage{};
	double volume_of_luggage{};
	vector <double> surcharge_percent{ 10,25 };
	double cost{ 2.5 };
	double total_cost{};
	double temp{};

	cout << "enter please lenght of luggage: " << endl;
	cin >> temp;
	dimensions_of_luggage.push_back(temp);

	cout << "enter please width of luggage: " << endl;
	cin >> temp;
	dimensions_of_luggage.push_back(temp);

	cout << "enter please height of luggage: " << endl;
	cin >> temp;
	dimensions_of_luggage.push_back(temp);

	volume_of_luggage = dimensions_of_luggage.at(0) * dimensions_of_luggage.at(1) * dimensions_of_luggage.at(2);
	total_cost = volume_of_luggage * cost;

	if (dimensions_of_luggage.at(0) > 10 || dimensions_of_luggage.at(1) > 10 || dimensions_of_luggage.at(2) > 10) {
		cout << "yor luggage is to big" << endl;
	}
	else {
		cout << "your luggage is " << volume_of_luggage << " square inches";
		if (volume_of_luggage <= 100) {
			cout << "total prise is " << total_cost;
		}
		else if (volume_of_luggage > 100 && volume_of_luggage <= 500) {
			cout << "total prise is " << total_cost + total_cost / 10;
		}
		else if (volume_of_luggage > 500) {
			cout << "total prise is " << total_cost + total_cost / 25;
		}
	}



	return 0;
}