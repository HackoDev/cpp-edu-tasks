//
//  Point.hpp
//  test-edu
//
//  Created by Eugene on 29/09/2019.
//  Copyright © 2019 Eugene. All rights reserved.
//

#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>
#include <iostream>

class Point {

public:

    Point();

    Point(float, float);
    
    Point(const Point&);

    ~Point();

    void setXY(float, float);

    void setX(float);

    void setY(float);

    float getX();

    float getY();

    float distance(Point*);

    friend std::ostream& operator<<(std::ostream&, const Point&);

private:
    float x;
    float y;

};

#endif
