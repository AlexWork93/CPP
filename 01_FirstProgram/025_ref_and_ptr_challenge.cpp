//Write a C++ function named apply_all that expects two arrays of integers and their sizes 
//and dynamically allocates a new array of integers whose size is the product of the two array sizes.
//
//The function should loop through the second array and multiply each element across each 
//element of an array 1 and store the product in the newly created array.
//
//The function should return a pointer to the newly allocated array.
//
//You can also write a print function that expects a pointer to an array of integers 
//and its sizw and display the elements in the array.
//


#include <iostream>

using namespace std;

void ref_and_ptr();
int *apply_all(int* arr_1, int* arr_2, size_t arr_1_size, size_t arr_2_size);
int* allocate_memory(size_t arr_size);
void print_arr(int* arr, size_t arr_size);

int* allocate_memory(size_t arr_size) {
	int* arr = new int[arr_size];
	return arr;
}

int* apply_all(int* arr_1, int* arr_2, size_t arr_1_size, size_t arr_2_size) {
	size_t res_arr_size{ arr_1_size * arr_2_size };
	size_t arr_1_iterator{ 0 };
	size_t arr_2_iterator{ 0 };
	int* res_arr = allocate_memory(res_arr_size);
	for (size_t res_arr_iterator{ 0 }; res_arr_iterator < res_arr_size; res_arr_iterator++) {
		cout << "arr 1: " << arr_1[arr_1_iterator] << " arr 2: " << arr_2[arr_2_iterator] << endl;
		res_arr[res_arr_iterator] = arr_2[arr_2_iterator] * arr_1[arr_1_iterator];
		arr_1_iterator++;
		if (arr_1_iterator == arr_1_size ) {
			arr_2_iterator++;
			arr_1_iterator = 0;
		}
	}

	return res_arr;
}

void ref_and_ptr() {
	int arr_1[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr_2[]{ 1,2,3,4};
	int *result = apply_all(arr_1, arr_2, sizeof(arr_1) / sizeof(int), sizeof(arr_2) / sizeof(int));
	print_arr(result, (sizeof(arr_1) / sizeof(int)) * (sizeof(arr_2) / sizeof(int)));
	delete[] result;
}

void print_arr(int* arr, size_t arr_size) {
	for (size_t i{ 0 }; i < arr_size; i++) {
		cout << arr[i] << " ";
		if ((i + 1) % 10 == 0) {
			cout << endl;
		}
	}
}


//int main() {
//	ref_and_ptr();
//	return 0;
//}
