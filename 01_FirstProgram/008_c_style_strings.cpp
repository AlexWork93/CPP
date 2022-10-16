//Using C - style Strings
//In this exercise you will create a program that determines the length of a first name and last name individually and then the length of the entire name through the use of the C - style string functions strlen, strcpy, and strcat.
//
//Begin by declaringand initializing the C - style string variable first_name to contain "Bjarne".
//Now, declareand initialize a second C - style string variable last_name to contain "Stroustrup".
//You must also declare a third C - style string variable whole_name but do not initialize it yet.Remember that the variable whole_name must be large enough to contain the firstand last name with no whitespaces.
//
//Now, by using the C - style string function strlen, declareand initialize the variable first_name_length to contain the length of the first_name stringand the variable last_name_length to contain the length of the last_name string.
//
//
//Using the C - style string function strcpy, copy the first_name string into the whole_name string variable.
//Now, by using the C - style string function strcat, concatenate the last_name string at the end of the whole_name string.
//Finally, by using the C - style string function strlen, declareand initialize the variable whole_name_length to contain the length of the whole_name string.

#include <iostream>
#include <cstring>

using namespace std;

int using_c_style_string() {

	char first_name[20] = "Bjarne";
	char last_name[20] = "Stroustrup";
	char whole_name[40];

	size_t first_name_length{};
	size_t last_name_length{};
	size_t whole_name_length{};

	strcpy_s(whole_name, first_name);
	strcat_s(whole_name, " ");
	strcat_s(whole_name, last_name);

	first_name_length = strlen(first_name);
	last_name_length = strlen(last_name);
	whole_name_length = strlen(whole_name);

	cout << "The length of the first name, " << first_name << ", is " << first_name_length << " letters long and the length of the last name, " << last_name << ", is " << last_name_length << " letters long. This means that the length of the whole name must be " << whole_name_length << " letters long.";

	//Make whole_name uppercase using for loop

	for (size_t i{ 0 }; i < strlen(whole_name); i++) {
		if (isalpha(whole_name[i])) {
			whole_name[i] = toupper(whole_name[i]);
		}
	}
	cout << endl << whole_name << endl;

	//replace space between first and last name with tab

	for (size_t i{ 0 }; i < strlen(whole_name); i++)
		if (isspace(whole_name[i])) {
			whole_name[i] = '\t';
		}

	cout << endl << whole_name << endl;
	return 0;
}