#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED

#include <iostream>
#include <string>

class animal {
public:
	animal();
	virtual ~animal();
	virtual const std::string say() = 0;
	virtual void move() = 0;
	virtual animal* clone() = 0;
};

#endif