#pragma once
#include <string>
#include <iostream>

class Dog {

private:
	std::string name;
	int age{};
	bool is_angry{};

public:
	//default constructor
	Dog(std::string new_name, int new_age, bool new_is_angry);
	//Copy constructor
	Dog(const Dog& source_dog);
	//Destructor of class
	~Dog();

	std::string get_name() { return name; }
	int get_age() { return age; }
	bool get_is_angry() { return is_angry; }
};	

Dog::Dog(std::string new_name = "None", int new_age = 0, bool new_is_angry = true)
	: name{ new_name }, age{ new_age }, is_angry{ new_is_angry }{
	std::cout << "Default constructor for " << new_name << " was called." << std::endl;
}

Dog::Dog(const Dog& source_dog) 
	:name{ source_dog.name + "_copy" }, age{source_dog.age}, is_angry{source_dog.is_angry}{
	std::cout << "Copy constructor for " << source_dog.name << " was called." << std::endl;
}


