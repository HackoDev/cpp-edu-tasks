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
    void setRadius(float);
    float getRadius();
    void setCenter(Point*);
    Point* getCenter();
    bool contains(Point*);
    float perimetr();
    float area();

private:
    Point* center;
    float radius;

};

#endif /* Circle_hpp */
