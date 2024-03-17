#ifndef ALGORITHM_ALGORITHMS_H
#define ALGORITHM_ALGORITHMS_H
#include "MyFunctions.h"
#include <vector>


/**
 * Function that sorts a vector using bubble sort method i learned from
 * my teacher in high school
 * @tparam T type passed to the template
 * @param vec vector to be sorted
 */
template <typename T>
void bubbleSortVector(std::vector<T> &vec){
    for (int i = 0; i < vec.size()-1; ++i) {
        for (int j = 0; j < vec.size()-1; ++j) {
            if(vec.at(j+1) < vec.at(j)) {
                swapVectorElements(j, j+1, vec);
            }
        }
    }
}

/**
 * Function that sorts a vector using insertion sort found on page 19
 * of "Introduction to Algorithms 4th Edition" by Thomas H. Cormen,
 * Charles E. Leiserson, Ronald L. Rivest, Clifford Stein
 * @tparam T type passed to the template
 * @param vec vector to be sorted
 */
template <typename T>
void insertionSortVector(std::vector<T> &vec){
    T key, j;
    for (int i = 1; i < vec.size(); i++) {
        key = vec.at(i);
        j = i-1;
        while (j >= 0 && vec.at(j) > key) {
            vec.at(j+1) = vec.at(j);
            j = j - 1;
        }
        vec.at(j+1) = key;
    }
}

//INSERT COMMENT HERE!
template <typename T>
int partition(std::vector<T> &vec, int p, int r){
    int i = p;
    for (int j = p; j < r-1; ++j) {
        if(vec.at(j) <= vec.at(r-1)){
            swapVectorElements(j, i, vec);
            ++i;
        }
    }
    swapVectorElements(i, r-1, vec);
    return i;
}
/**
 * Function that sorts a vector using quick sort found on pages 183/184
 * of "Introduction to Algorithms 4th Edition" by Thomas H. Cormen,
 * Charles E. Leiserson, Ronald L. Rivest, Clifford Stein
 * @tparam T type passed to the template
 * @param vec vector to be sorted
 */
template <typename T>
void quickSortVector(std::vector<T> &vec, int p, int r){
    if(r-p > 1){
        int q = partition(vec, p, r);
        quickSortVector(vec,p,q-1);
        quickSortVector(vec,q+1,r);
    }
}


#endif //ALGORITHM_ALGORITHMS_H
