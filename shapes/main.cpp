#include <iostream>
#include "Point.hpp"
#include "Triangle.hpp"
#include "Circle.hpp"
#include <string.h>

int main(int argc, const char * argv[]) {
    // points
    Point* p1 = new Point(0, 0);
    Point* p2 = new Point(0, 10);
    std::cout << p1 << std::endl;
    std::cout << "Point 1: (" << p1->get_x() << " : " << p1->get_y() << ")" << std::endl;
    std::cout << "Point 2: (" << p2->get_x() << " : " << p2->get_y() << ")" << std::endl;
    std::cout << "Distance is: " << p1->distance(p2) << "\n";
    Point* p3 = new Point(*p1);
    std::cout << "Point 3: (" << p3->get_x() << " : " << p3->get_y() << ")" << std::endl;
    p3->set_xy(10, 0);
    
    // triangle
    Triangle* tr1 = new Triangle(p1, p2, p3);
    std::cout << tr1->get_str_type() << std::endl;
    
    Circle* c1 = new Circle(new Point(0, 0), 5);
    std::cout << "Contains (1, 1): " << ((c1->contains(new Point(1, 1)))? "true" : "false") << std::endl;
    std::cout << "Contains (0, 0): " << ((c1->contains(new Point(0, 0)))? "true" : "false") << std::endl;
    std::cout << "Contains (6, 0): " << ((c1->contains(new Point(6, 0)))? "true" : "false") << std::endl;
    std::cout << "Perimetr: " << c1->perimetr() << ". Area: " << c1->area() << std::endl;
    delete p1;
    return 0;
}
