#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int array[5] = {4,5,6,7,6};
    int secondarray[5] = {5,3,6,2,9};
    std::cout << "The number is: " << sum_two_arrays(array, secondarray, 5) << std::endl;
    return 0;
}