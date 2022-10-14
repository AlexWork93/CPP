#include <iostream>
#include <vector>

using namespace std;
//Given a vector of integers, determine how many integers are present before you see the value -99 . Note, it's possible -99  is not in the vector! If -99  is not in the vector then the result will be equal to the number of elements in the vector.

//The final result should be stored in an integer variable named count .

//Note that you the different vectors will be tested against your code.You do not need to declare the vector of integers.vec  is the name of the vector you should use.

int while_loop() {

    vector<int> vec{ 12,432,54,23,23,-499 };
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count{ 0 };
    while (vec.size() > count && vec.at(count) != -99) {
        count++;
    }
    cout << count;
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}


//Version with infinite loop

int infinite_while_loop() {

    vector<int> vec{ 10,14,65,23,-99 };
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count{ 0 };
    while (true) {
        if (vec.size() == 0) {
            break;
        }
        else if (vec.at(count) == -99) {
            break;
        }
        else if (vec.size() == count + 1) {
            count = vec.size();
            break;
        }
        else
            count++;
    }
    cout << count;

    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}