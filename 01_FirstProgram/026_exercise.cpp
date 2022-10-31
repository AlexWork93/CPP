//Adding public methods that access private class attributes
//Given the following Dog class in Dog.h add the following public getterand setter methods that getand set each class attribute as follows :
//
//get_name returns the name attribute of the dog
//
//set_name sets the name attribute of the dog to the string that is passed into the method.
//
//get_age returns the age attribute of the dog
//
//set_age sets the age attribute of the dog to the int passed into the method.
//
//Please add your code to the Dog.h file.The exercise.cpp file should NOT be modified.

//Given an existing Dog class in Dog.h, add the following public method to the class :
//
//	get_human_years() return the dog's age * 7
//
//	speak()  returns the std::string "Woof"
//
//	Please add your code in the Dog.h file.


//Given the Dog class in Dog.h, add a default no - args constructor that initializes the dog's name to "None" and the dog's age to zero.
//
//Please add your code to the Dog.h file.



#include "026_Dog.h"
#include <iostream>
#include <string>
using namespace std;


int class_and_headers() {
	Dog* dog = new Dog();
	string name = "lalala";
	cout << "Dogs name is " << dog->get_name() << endl;
	dog->set_name(name);
	cout << dog->speak() << endl;
	cout << "Dogs name is " << dog->get_name() << endl;
	delete dog;
}

string Dog::speak() {
	return "Woof";
}