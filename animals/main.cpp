#include <stdio.h>
#include <iostream>
#include <string>
#include "birds/bird.hpp"
#include "mammals/mammal.hpp"
#include "reptiles/reptile.hpp"
#include "reptiles/tireks.hpp"
#include "birds/golub.hpp"
#include "zoo/zoo.hpp"

// g++ --std=c++11 main.cpp base/animal.cpp base/creator.cpp birds/bird.cpp mammals/mammal.cpp reptiles/reptile.cpp reptiles/tireks.cpp birds/golub.cpp zoo/zoo.cpp

int main(int argc, const char * argv[]) {
	tireks* t = new tireks("Reks", 3);
	golub* g = new golub();
	golub* g2 = new golub("test", 20);
	golub* g3 = new golub(*g2);
	golub* g4 = g3->clone();
	std::cout << g2 << std::endl;
	std::cout << g2->say() << std::endl;
	tireks* clonedT = t->clone();

	zoo* z = new zoo();
	z->addAnimal(t);
	z->addAnimal(g);
	z->addAnimal(g2);
	z->addAnimal(g3);
	z->addAnimal(g4);
	z->addAnimal(clonedT);
	z->walk();

	delete t;
	delete clonedT;
	delete g;
	delete g2;
	return 0;
}
