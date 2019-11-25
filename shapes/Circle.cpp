//
//  Circle.cpp
//  test-edu
//
//  Created by Eugene on 03/10/2019.
//  Copyright © 2019 Eugene. All rights reserved.
//

#include <tgmath.h>
#include <math.h>
#include "Circle.hpp"
#include "Point.hpp"

const float PI = 3.14;


Circle::Circle() {
    this->center = new Point(1, 2);
    this->radius = 0;
};

Circle::Circle(Point* center, float radius) {
    this->center = center;
    this->radius = radius;
};

void Circle::set_radius(float radius) {
    this->radius = radius;
};

float Circle::get_radius() {
    return this->radius;
};

void Circle::set_center(Point* center) {
    this->center = center;
};

Point* Circle::get_center() {
    return this->center;
};

bool Circle::contains(Point* p1) {
    return this->center->distance(p1) <= this->radius;
};

float Circle::area() {
    return PI * this->radius * this->radius;
};


float Circle::perimetr() {
    return 2 * PI * this->radius;
};

