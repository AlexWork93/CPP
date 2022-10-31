#pragma once

#include <iostream>
#include <string>
using namespace std;

class Dog {
private:
	string name;
	int age;

public:
	//constructor
	Dog() {
		name = "None";
		age = 0;
	}
	//overloaded constructor
	Dog(string constr_name, int constr_age) {
		name = constr_name;
		age = constr_age;
	}
	//constructor with initialization list
	Dog(string constr_name) 
		:name{ constr_name }, age{ 0 } {
	}
	//getters for variables
	string get_name() {
		return name;
	}
	int get_age() {
		return age;
	}
	//Setters for vatiables
	void set_name(string new_name) {
		name = new_name;
	}
	void set_age(int new_age) {
		age = new_age;
	}
	//Some class functions
	int get_human_years() {
		return age * 7;
	}
	string speak(); //function 

	//Destructor
	~Dog() {
		cout << "Dog's " << name << " destructor has beed called." << endl;
	};
};
