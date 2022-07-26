#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int num_count(int array[], int n, int number);

int main() {
    int array[5] = {4,5,6,7,6};
    std::cout << "The number is: " << num_count(array, 5, 6) << std::endl;
    return 0;
}