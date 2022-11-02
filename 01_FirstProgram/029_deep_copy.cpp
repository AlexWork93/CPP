#include "029_deep_copy.h"
#include <iostream>
#include <string>


void deep_copy_start();
void print_obj(Deep_copy &obj);



void print_obj(Deep_copy &obj) {
	std::cout << "I'm obj with name: " << obj.get_some_string() << " and my num is: " << obj.get_some_num() << std::endl;
}

void deep_copy_start() {
	std::cout << "shallow copy" << std::endl;
	Deep_copy obj1_shallow = Deep_copy(100, "obj1_shallow", true);
	Deep_copy obj2_shallow = Deep_copy(obj1_shallow);

	std::cout << "Lets create obj1_shallow and its shallow copy" << std::endl;

	print_obj(obj1_shallow);
	print_obj(obj2_shallow);

	std::cout << "Now set obj1_shallow to 1000" << std::endl;

	obj1_shallow.set_some_num(1000);

	print_obj(obj1_shallow);
	print_obj(obj2_shallow);
	
	std::cout << "And now set obj1_shallow_coppy to 2000" << std::endl;

	obj2_shallow.set_some_num(2000);
	
	print_obj(obj1_shallow);
	print_obj(obj2_shallow);


	Deep_copy obj1_deep = Deep_copy(100, "obj1_deep", false);
	Deep_copy obj2_deep = Deep_copy(obj1_deep);

	print_obj(obj1_deep);
	print_obj(obj2_deep);

	obj1_deep.set_some_num(1000);

	print_obj(obj1_deep);
	print_obj(obj2_deep);

	obj2_deep.set_some_num(2000);

	print_obj(obj1_deep);
	print_obj(obj2_deep);

	//will throw an error in the end because destructor will try to clean memory in the location of shallow copy twice. First for copy and second for object itself.
}

int main() {
	deep_copy_start();
}