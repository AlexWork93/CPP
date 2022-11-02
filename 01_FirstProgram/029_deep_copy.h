#pragma once

#include <iostream>
#include <string>

class Deep_copy {
private:
	//Create null ptr to int
	int* some_num{nullptr};
	std::string some_string;
	bool shallow{};
public:
	void set_some_num(int new_num);
	void set_some_string(std::string new_string);
	int get_some_num();
	std::string get_some_string();
	Deep_copy(int new_num, std::string new_string, bool new_shallow);
	Deep_copy(const Deep_copy& source);
	~Deep_copy();
};


Deep_copy::Deep_copy(int new_num, std::string new_string, bool new_shallow)
	:some_num{}, some_string{ new_string }, shallow{ new_shallow } {
	//initialize pointer
	some_num = new int;
	//put value from constructor to storage 
	*some_num = new_num;
}

Deep_copy::Deep_copy(const Deep_copy& source)
	//delegate to default constructor reference to out object
	:Deep_copy{ *source.some_num, source.some_string + "_copy", source.shallow} {
	if (!shallow) {
		//for deep copy we have to create its own instance of variable to prevent editing or deleting the variable of main object
		int* some_num_of_copy = new int;
		//put into this new location our value from constructor
		*some_num_of_copy = *source.some_num;
	}
	else {
		//in shallow copy we just copy the reference. Thats why all coppies of object will reffer to the same location in memory
		some_num = source.some_num;
	}
}

void Deep_copy::set_some_num(int new_num) {
	*some_num = new_num;
}

void Deep_copy::set_some_string(std::string new_string) {
	some_string = new_string;
}

int Deep_copy::get_some_num() {
	return *some_num;
}

std::string Deep_copy::get_some_string() {
	return some_string;
}

Deep_copy::~Deep_copy() {
	std::cout << "Destructor called for " << some_string << " object" << std::endl;
	delete some_num;
}