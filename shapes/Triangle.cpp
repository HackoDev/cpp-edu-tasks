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

Point* Triangle::get_a() {
    return a;
};
Point* Triangle::get_b() {
    return b;
};
Point* Triangle::get_c() {
    return c;
};

float Triangle::distance_a() {
    return a->distance(b);
}

float Triangle::distance_b() {
    return b->distance(c);
}

float Triangle::distance_c() {
    return c->distance(a);
}

float Triangle::perimetr() {
    return a->distance(b) + b->distance(c) + a->distance(c);
};

float Triangle::area() {
    float pp = perimetr() / 2;
    return sqrt(pp * (pp - distance_a()) * (pp - distance_b()) * (pp - distance_c()));
};


int Triangle::get_num_type() {
    float dA = distance_a(), dB = distance_b(), dC = distance_c();
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

std::string Triangle::get_str_type() {
    switch (get_num_type()) {
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
