//
//  utils.hpp
//  Arrays
//
//  Created by Eugene on 25/10/2019.
//  Copyright © 2019 Eugene. All rights reserved.
//

#ifndef utils_hpp
#define utils_hpp

#include <stdio.h>
#include <iostream>


template <typename T>
void removeElement(T* arr, int* n, T index) {
    int total = *n;
    for (int i = index; i < total - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

template <typename T>
void nullEachSecondElement(T* arr, int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) {
            arr[i] = 0;
        }
    }
}

template <typename T>
bool removeDuplicates(T* arr, int* n) {
    int i = 0, total = *n;
    while (i < *n - 1) {
        if (arr[i] == arr[i + 1]) {
            removeElement(arr, n, i + 1);
        } else {
            i++;
        }
    }
    return total != *n;
}

template <typename T>
void nullMaxElement(T* arr, int n) {
    T maxValue = *arr;
    for (int i = 0; i < n; i++) {
        if (maxValue < arr[i]) {
            maxValue = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == maxValue) {
            arr[i] = 0;
        }
    }
}

template <typename T>
void printArray(T* arr, int n) {
    std::cout << "Array (" << n << "): ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i];
        if (i < n -1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

template <typename T>
bool elementsAreEquial(T* arr, int n, int index) {
    if (index - 1 == (int)(n / 2)) {
        return true;
    } else {
        return arr[index] == arr[n - index - 1] && elementsAreEquial(arr, n, index + 1);
    }
}


#endif /* utils_hpp */
