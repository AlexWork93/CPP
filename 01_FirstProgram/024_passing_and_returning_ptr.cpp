#include <iostream>
#include <vector>
#include <string>

using namespace std;

int* alocate_memory(size_t size, int def_value = 10);
void print_array(size_t size, int* arr);
void print_vector(vector<string>* vec);
void add_to_vec(vector<string>* vec, string* value_to_add);

int* alocate_memory(size_t size, int def_value) {
	int* result = new int[size];
	for (size_t i{ 0 }; i < size; i++) {
		*(result + i) = def_value;
	}
	return result;
}

void print_array(size_t size, int* arr) {
	for (size_t i{ 0 }; i < size; i++){
		cout << "element with index " << i << " has value " << arr[i] << endl;
	}
}

void print_vector(vector<string>* vec) {
	for (auto el : *vec) {
		cout << el << " ";
	}
	cout << endl;
}

void add_to_vec(vector<string>* vec, string* value_to_add) {
	vec->push_back(*value_to_add);
}



int pass_return_ptr() {
	int* ref_to_arr{ nullptr };
	size_t length_of_arr = 10;
	int default_value_of_array = 20;

	ref_to_arr = alocate_memory(length_of_arr, default_value_of_array);

	print_array(length_of_arr, ref_to_arr);
	delete[] ref_to_arr;


	vector<string> fruits{"apples", "bananas"};
	string lemon = "lemon";
	print_vector(&fruits);
	add_to_vec(&fruits, &lemon);
	print_vector(&fruits);

	return 0;
}