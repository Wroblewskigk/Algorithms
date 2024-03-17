#include "MyFunctions.h"
#include "Algorithms.h"
#include <iostream>
#define VECTOR_SIZE 60

int main() {
    system("CLS");
    std::vector<int> intVec;
    std::vector<float> floatVec;

    std::cout << "BUBBLE SORT" << std::endl;
    randomizeVector(intVec, VECTOR_SIZE);
    printVector<int>(intVec); std::cout << std::endl;
    bubbleSortVector<int>(intVec);
    printVector(intVec); std::cout << std::endl;
    randomizeVector(floatVec, VECTOR_SIZE);
    printVector<float>(floatVec); std::cout << std::endl;
    bubbleSortVector<float>(floatVec);
    printVector(floatVec); std::cout << std::endl;

    intVec.clear();
    floatVec.clear();
    std::cout << std::endl;

    std::cout << "INSERTION SORT" << std::endl;
    randomizeVector(intVec, VECTOR_SIZE);
    printVector<int>(intVec); std::cout << std::endl;
    insertionSortVector<int>(intVec);
    printVector(intVec); std::cout << std::endl;
    randomizeVector(floatVec, VECTOR_SIZE);
    printVector<float>(floatVec); std::cout << std::endl;
    insertionSortVector<float>(floatVec);
    printVector(floatVec); std::cout << std::endl;

    intVec.clear();
    floatVec.clear();
    std::cout << std::endl;

    std::cout << "QUICK SORT" << std::endl;
    randomizeVector(intVec, VECTOR_SIZE);
    printVector<int>(intVec); std::cout << std::endl;
    quickSortVector<int>(intVec, 0, (int)intVec.size()-1);
    printVector(intVec); std::cout << std::endl;
    randomizeVector(floatVec, VECTOR_SIZE);
    printVector<float>(floatVec); std::cout << std::endl;
    quickSortVector<float>(floatVec, 0, (int)floatVec.size()-1);
    printVector(floatVec); std::cout << std::endl;

    system("PAUSE");
    return 0;
}
