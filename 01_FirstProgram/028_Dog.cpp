#include "028_Dog.h"
#include <iostream>
#include <string>



void pring_dog(Dog dog);
void start();

void pring_dog(Dog dog) {
	std::cout << "Dog " << dog.get_name() << " is " << dog.get_age() << " years old and is " << (dog.get_is_angry() ? "very angry!" : "not very angry.") << std::endl;
}
void start() {
	Dog some_dog;
	Dog chybby = Dog("Chybby");
	//to perform this function, copy of object will be created and coppy constructor will be called
	pring_dog(chybby);
	//after performing of function object will run out of scope so for it destructor will be called

}

//int main() {
//	start();
//
//	return 0;
//}