#include <cstring>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

void arr_and_ptr();

void arr_and_ptr() {

	//array variable contains reference to first element af array

	int int_arr[5] {};

	cout << "int_arr[1]: " << int_arr[1] << endl; //0

	//lets declare int pointer as nullptr 

	int* pointer_to_arr_el_index_1{ nullptr };
	
	// assign reference to arr element with index 1 to it
	pointer_to_arr_el_index_1 = &int_arr[1];

	// print dereferenced pointer
	cout << "*pointer_to_arr_el_index_1: " << *pointer_to_arr_el_index_1 << endl; //0
	cout << "int_arr[1]: " << int_arr[1] << endl; //0

	// lets update value using pointer
	*pointer_to_arr_el_index_1 = 10;

	//and print once more
	cout << "*pointer_to_arr_el_index_1: " << *pointer_to_arr_el_index_1 << endl; //10
	cout << "int_arr[1]: " << int_arr[1] << endl; //10

	//lets print addresses 
	cout << "pointer_to_arr_el_index_1: " << pointer_to_arr_el_index_1 << endl; //00000014968FF7BC or some another location in memory
	cout << "&int_arr[1]: " << &int_arr[1] << endl; //00000014968FF7BC or some another location in memory


	//math operations with pointes
	int* pointer_to_arr_el_index_4{ nullptr };
	pointer_to_arr_el_index_4 = &int_arr[4];
	*pointer_to_arr_el_index_4 = 50;

	cout << "pointer_to_arr_el_index_1 - pointer_to_arr_el_index_4: " << pointer_to_arr_el_index_1 - pointer_to_arr_el_index_4 << endl;
	

	//incrementing or dicrementing of refference will move it if array
	//Lets first put values to array from 10 to 50;
	int* ptr_to_arr{ int_arr }; //the same as type { int_arr[0] }

	for (size_t i{ 0 }; i < (sizeof(int_arr) / sizeof(int)); i++) {
		*(ptr_to_arr++) = (i + 1) * 10;
	}
	//reassing back ptr to first el of array
	ptr_to_arr = int_arr;
	for (size_t i{ 0 }; i < (sizeof(int_arr) / sizeof(int)); i++) {
		cout << "ptr_to_arr: " << ptr_to_arr << endl;
		cout << "*ptr_to_arr: " << *ptr_to_arr << endl;
		ptr_to_arr++;
	}

}
