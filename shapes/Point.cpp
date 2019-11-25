//
//  Point.cpp
//  test-edu
//
//  Created by Eugene on 29/09/2019.
//  Copyright © 2019 Eugene. All rights reserved.
//

#include <tgmath.h>
#include <iostream>
#include "Point.hpp"

Point::Point() {};

Point::Point(const Point &point): x(point.x), y(point.y) {
    std::cout << "Создана копия: (" << x << ", " << y << ")" << std::endl;
};

Point::~Point() {
    std::cout << "Уничтожена точка: " << this << std::endl;
};

Point::Point(float x, float y) {
    this->x = x;
    this->y = y;
};

void Point::set_x(float value) {
    x = value;
};

void Point::set_y(float value) {
    y = value;
};

void Point::set_xy(float x, float y) {
    this->x = x;
    this->y = y;
};

float Point::get_x() {
    return x;
};

float Point::get_y() {
    return y;
};

float Point::distance(Point *p){
    
    return sqrt(pow(x - p->get_x(), 2) + pow(y - p->get_y(), 2));
}

std::ostream& operator<<(std::ostream& out, const Point& p){
    out << "Point({ " << p.x << " : " << p.y << " })";
    return out;
}

