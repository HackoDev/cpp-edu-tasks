//
//  Triangle.cpp
//  test-edu
//
//  Created by Eugene on 29/09/2019.
//  Copyright © 2019 Eugene. All rights reserved.
//

#include <tgmath.h>
#include <string.h>
#include "Triangle.hpp"

Triangle::Triangle(){
    
};

Triangle::Triangle(Point* a, Point* b, Point* c): a(a), b(b), c(c) { };

const int Triangle::ISOSCELES = 0;
const int Triangle::EQUILATERAL = 1;
const int Triangle::RECTANGULAR = 2;
const int Triangle::ARBITARY = 3;

const std::string Triangle::ISOSCELES_LABEL = "Расносторонний";
const std::string Triangle::EQUILATERAL_LABEL = "Раснобедренный";
const std::string Triangle::RECTANGULAR_LABEL = "Прямоугольный";
const std::string Triangle::ARBITARY_LABEL = "Произвольный";

Point* Triangle::getA() {
    return a;
};
Point* Triangle::getB() {
    return b;
};
Point* Triangle::getC() {
    return c;
};

float Triangle::distanceA() {
    return a->distance(b);
}

float Triangle::distanceB() {
    return b->distance(c);
}

float Triangle::distanceC() {
    return c->distance(a);
}

float Triangle::perimetr() {
    return a->distance(b) + b->distance(c) + a->distance(c);
};

float Triangle::area() {
    float pp = perimetr() / 2;
    return sqrt(pp * (pp - distanceA()) * (pp - distanceB()) * (pp - distanceC()));
};


int Triangle::getNumType() {
    float dA = distanceA(), dB = distanceB(), dC = distanceC();
    if (dA == dB == dC) {
        return Triangle::ISOSCELES;
    } else if (dA == dB || dB == dC || dA == dC) {
       return Triangle::EQUILATERAL;
    } else if (false) {
       return Triangle::RECTANGULAR;
    } else {
        return Triangle::ARBITARY;
    }
};

std::string Triangle::getStrType() {
    switch (getNumType()) {
        case Triangle::ISOSCELES:
            return Triangle::ISOSCELES_LABEL;
            break;
        case Triangle::EQUILATERAL:
            return Triangle::EQUILATERAL_LABEL;
            break;
        case Triangle::RECTANGULAR:
            return Triangle::RECTANGULAR_LABEL;
            break;
        default:
            return Triangle::ARBITARY_LABEL;
            break;
    }
}
