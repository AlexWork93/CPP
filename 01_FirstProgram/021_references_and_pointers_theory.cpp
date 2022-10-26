#include <iostream>
#include <vector>
#include <string>
using namespace std;


int ref_and_point();

int ref_and_point() {
	//Create some variables
	int int_var{100500};
	string string_var{"Hello!"};
	vector<int> int_vec{100, 200, 300, 4000};

	//create pointers
	//pointers must have type of variable refer to;
	//these pointers are not defined so they point into somewhere in memory and it will cause a compiler arror;

	//int* int_var_ptr;
	//string* string_var_ptr;
	//vector<int>* int_vec_ptr;

	//now pointers are defined as null pointer
	int* int_var_ptr{nullptr};
	string* string_var_ptr{nullptr};
	vector<int>* int_vec_ptr{nullptr};

	cout << "int_var_ptr " << int_var_ptr << endl;
	cout << "string_var_ptr " << string_var_ptr << endl;
	cout << "int_vec_ptr " << int_vec_ptr << endl;

	//lets dynamically locate memory in the heep using keyword new

	//delete int_var_ptr;
	//delete string_var_ptr;
	//delete int_vec_ptr;

	int_var_ptr = new int;
	string_var_ptr = new string;
	int_vec_ptr = new vector<int>;

	//Attempt to print pointer will display a address in memory of this element
	cout << "int_var_ptr " << int_var_ptr << endl;
	cout << "string_var_ptr " << string_var_ptr << endl;
	cout << "int_vec_ptr " << int_vec_ptr << endl;


	//Lets put refferences to our ariables in this pointers

	int_var_ptr = &int_var;
	string_var_ptr = &string_var;
	int_vec_ptr = &int_vec;

	cout << "int_var_ptr " << int_var_ptr << endl;
	cout << "string_var_ptr " << string_var_ptr << endl;
	cout << "int_vec_ptr " << int_vec_ptr << endl;

	//for getting an access to value in storage we need to make a derefferencing of pointer
	
	cout << "*int_var_ptr " << *int_var_ptr << endl;
	cout << "*string_var_ptr " << *string_var_ptr << endl;
	cout << "*int_vec_ptr " << (*int_vec_ptr).at(0) << endl;

	//update variable by reference

	*int_var_ptr = 200;
	*string_var_ptr = "Bye..";
	(*int_vec_ptr).push_back(40);

	cout << "updated *int_var_ptr " << *int_var_ptr << endl;
	cout << "updated *string_var_ptr " << *string_var_ptr << endl;
	cout << "updated *int_vec_ptr " << (*int_vec_ptr).at((*int_vec_ptr).size() - 1) << endl;


	return 0;
}