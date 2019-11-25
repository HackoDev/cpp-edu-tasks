//
//  Circle.hpp
//  test-edu
//
//  Created by Eugene on 03/10/2019.
//  Copyright © 2019 Eugene. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>
#include "Point.hpp"

class Circle {
public:
    Circle();
    Circle(Point*, float);
    void set_radius(float);
    float get_radius();
    void set_center(Point*);
    Point* get_center();
    bool contains(Point*);
    float perimetr();
    float area();

private:
    Point* center;
    float radius;

};

#endif /* Circle_hpp */
