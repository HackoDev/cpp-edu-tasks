//
//  Triangle.hpp
//  test-edu
//
//  Created by Eugene on 29/09/2019.
//  Copyright © 2019 Eugene. All rights reserved.
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include <stdio.h>
#include <string.h>
#include "Point.hpp"

class Triangle {
public:
    Triangle();
    Triangle(Point*, Point*, Point*);

    Point* getA();
    Point* getB();
    Point* getC();

    float distanceA();
    float distanceB();
    float distanceC();
    float perimetr();
    float area();
    int getNumType();
    std::string getStrType();
    
    static const int ISOSCELES;
    static const int EQUILATERAL;
    static const int RECTANGULAR;
    static const int ARBITARY;

    static const std::string ISOSCELES_LABEL;
    static const std::string EQUILATERAL_LABEL;
    static const std::string RECTANGULAR_LABEL;
    static const std::string ARBITARY_LABEL;

private:
    Point* a;
    Point* b;
    Point* c;
};


#endif /* Triangle_hpp */
