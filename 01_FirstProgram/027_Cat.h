#pragma once
#include <string>
#include <iostream>
class Cat
{
private:
	std::string name;
	int age{};
	bool is_alife{};

public:

	Cat(std::string new_name, int new_age, bool is_alife_now)
		: name{ new_name }, age{ new_age }, is_alife{ is_alife_now }{};
	//Some variants of delegated constructors
	Cat(std::string new_name)
		: Cat{ new_name, 0, true } {};
	Cat(int new_age)
		:Cat{ "Noname", new_age, true } {};
	//delegated default constructor
	Cat()
		:Cat{ "Default old cat", 100, false } {};

	std::string get_name() {
		return name;
	}

	int get_age() {
		return age;
	}

	void set_name(std::string new_name) {
		name = new_name;
	}

	void set_age(int new_age) {
		age = new_age;
	}




};

