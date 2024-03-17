#ifndef ALGORITHM_MY_FUNCTIONS_H
#define ALGORITHM_MY_FUNCTIONS_H
#include <iostream>
#include <iomanip>
#include <random>
#include <vector>

/**
 * Function that pushes vecSize amount of random numbers in range [1 ; vecSize]
 * at the end of a vector.
 * @param intVec vector to push numbers to
 * @param vecSize number of numbers to be pushed into vector and their range
 */
void randomizeVector(std::vector<int> &intVec, int vecSize);
/**
 * Function that pushes vecSize amount of random numbers in range [1 ; vecSize]
 * at the end of a vector.
 * @param intVec vector to push numbers to
 * @param vecSize number of numbers to be pushed into vector and their range
 */
void randomizeVector(std::vector<float> &intVec, int vecSize);

/**
 * Function that prints a vector with spaces between numbers
 * @tparam T data type of the vector
 * @param vec vector to print
 */
template <typename T>
void printVector(std::vector<T> &vec){
    for (int i=0; i<vec.size(); ++i) {
        std::cout << std::fixed << std::setprecision(2) << vec.at(i) << " ";
    }
}

/**
 * Functions that swap two elements of a vector
 * @tparam T data type of the vector
 * @param firstElement index of the first element
 * @param secondElement index of the second element
 * @param vec vector to print
 */
template <typename T>
void swapVectorElements(int firstElement, int secondElement,std::vector<T> &vec){
    T temp = vec.at(firstElement);
    vec.at(firstElement) = vec.at(secondElement);
    vec.at(secondElement) = temp;
}

#endif //ALGORITHM_MY_FUNCTIONS_H
