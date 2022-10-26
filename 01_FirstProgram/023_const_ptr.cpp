#include <iostream>

using namespace std;


void const_ptr();

void const_ptr() {

	int some_val{ 50 };
	int some_another_val{ 60 };


	int* ptr_to_come_val{ &some_val };
	int* const const_ptr_to_come_val{ &some_val };
	const int* ptr_to_const_come_val{ &some_val };
	const int* const const_ptr_to_const_come_val{ &some_val };

	cout << "regular pointer ai able to be changed and value it points is able to be changed to" << endl;
	cout << "ptr_to_come_val points to some_val by default and = " << *ptr_to_come_val << endl;
	cout << "lets reassigne it to some_another_val" << endl;
	ptr_to_come_val = &some_another_val;
	cout << "and print once more: " << *ptr_to_come_val << endl;
	cout << "now lets change some_another_val using ptr_to_come_val to 80" << endl;
	*ptr_to_come_val = 80;
	cout << "and print it again: " << *ptr_to_come_val << endl;
	cout << "\n\n\n\n";
	cout << "const pointer is not able to be changed but value still is able to be changed" << endl;
	cout << "const_ptr_to_come_val = &some_another_val; can not be compiled" << endl;
	cout << "lets change some_val using const_ptr_to_come_val to 40" << endl;
	*const_ptr_to_come_val = 40;
	cout << "and print: " << *const_ptr_to_come_val << endl;
	cout << "\n\n\n\n";
	cout << "pointer to constant value is able to be switched to another reference but value of this referense can not be changed" << endl;
	cout << "now it points to some_val: " << *ptr_to_const_come_val << endl;
	cout << "lets assign in to some_another_val" << endl;
	ptr_to_const_come_val = &some_another_val;
	cout << "and print: " << *ptr_to_const_come_val;
	cout << "* ptr_to_const_come_val = 100; can not be compiled" << endl;
	cout << "\n\n\n\n";
	cout << "const_ptr_to_const_come_val it is some sort of read only pointer. It cant be reassigned to another reference either value in the reference can not be changed using this pionter" << endl;

}
