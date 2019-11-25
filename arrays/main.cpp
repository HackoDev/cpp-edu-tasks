//
//  main.cpp
//  Arrays
//
//  Created by Eugene on 06/10/2019.
//  Copyright © 2019 Eugene. All rights reserved.
//

#include <iostream>
#include "utils.hpp"


int main(int argc, const char * argv[]) {
    int n1 = 10;
    int elements1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    nullEachSecondElement(elements1, n1);
    printArray(elements1, n1);
    
    
    // replace max value to '0'
    int n2 = 10;
    int elements2[] = {1, 10, 3, 4, 5, 6, 7, 8, 9, 10};
    nullMaxElement(elements2, n2);
    printArray(elements2, n2);
    
    // remove duplicates: duplicates are here
    int n3 = 10;
    int elements3[] = {1, 1, 3, 2, 2, 2, 7, 8, 9, 10};
    printArray(elements3, n3);
    if (removeDuplicates(elements3, &n3)) {
        std::cout << "Changed" << std::endl;
        printArray(elements3, n3);
    } else {
        std::cout << "No changes" << std::endl;
    }
    
    // remove duplicates: no duplicates
    int n4 = 10;
    int elements4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArray(elements4, n4);
    if (removeDuplicates(elements4, &n4)) {
        std::cout << "Changed" << std::endl;
        printArray(elements4, n4);
    } else {
        std::cout << "No changes" << std::endl;
    }
    
    int n5 = 6;
    int elements5[] = {1, 2, 3, 3, 2, 1};
    std::cout << elementsAreEquial(elements5, n5, 0) << std::endl;
    
    int n6 = 6;
    int elements6[] = {1, 2, 3, 3, 2, 2};
    std::cout << elementsAreEquial(elements6, n6, 0) << std::endl;
    
    int n7 = 7;
    int elements7[] = {1, 2, 3, 4, 3, 2, 1};
    std::cout << elementsAreEquial(elements7, n7, 0) << std::endl;

    int n8 = 7;
    int elements8[] = {1, 2, 3, 4, 4, 2, 1};
    std::cout << elementsAreEquial(elements8, n8, 0) << std::endl;
    return 0;
}
