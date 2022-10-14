//Use a range - based for loop to loop through a given vector of integersand determine how many elements in the vector are evenly divisible by either 3 or by  5.
//
//The final result should be stored in an integer variable named count .
//
//The vector of integers has been provided for youand is named vec .

#include <vector>
using namespace std;

int range_based_for_loop_lesson() {

    vector<int> vec{ 1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700 };
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count{ 0 };
    for (auto vec_el : vec) {
        if (vec_el % 3 == 0 || vec_el % 5 == 0) {
            count++;
        }
    }
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT CHANGE THE CODE BELOW THIS LINE----
    return count;
}