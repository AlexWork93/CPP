//In this exercise you will create a program that will be used to reformat a name so that it can be read more easily.
//
//The string variable unformatted_full_name is comprised of two substrings; first_nameand last_name in that order.Each substring begins with a capital letter.
//
//Begin by declaringand initializing the string variable first_name from the string variable unformatted_full_name remembering that when initializing from another string, 
//the first integer within the curly brackets represents the starting index of the substring you wish to copyand the second integer represents the length of the substring.
//
//Next, declareand initialize the string variable last_name by using the assignment operator =and the string function substr on the string variable unformatted_full_name.
//
//Next, declareand initialize the string variable formatted_full_name.This should be done through the use of the concatenation operator + by concatenating the string variables first_nameand last_name in that order, 
//and then assigning the concatenated string to formatted_full_name using the assignment operator =.
//
//Now the string variable formatted_full_name contains the string "StephenHawking".We see that the string is no more formatted than the original string variable unformatted_full_name and 
//that is because the addition operator + does not add whitespace between strings when concatenating them.
//
//Fortunately, we can use the string function insert on the string variable formatted_full_name to insert a whitespace between the substrings such that formatted_full_name will then contain the string "Stephen Hawking".


#include <iostream>
#include <string>

using namespace std;

int cpp_style_strings_ex_1() {

    string unformatted_full_name{ "StephenHawking" };
    string formatted_full_name;
    string first_name;
    string last_name;
    int count{ 0 };
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    for (size_t i{ 0 }; i < unformatted_full_name.length(); i++) {
        if (unformatted_full_name.at(i) >= 'A' && unformatted_full_name.at(i) <= 'Z') {
            count++;
        }
        if (count <= 1) {
            first_name.push_back(unformatted_full_name.at(i));
        }
        else {
            last_name.push_back(unformatted_full_name.at(i));
        }

    }

    formatted_full_name = first_name + " " + last_name;

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----

    cout << formatted_full_name;


    return 0;
}