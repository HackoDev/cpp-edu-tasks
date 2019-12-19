#ifndef MAMMAL_H_INCLUDED
#define MAMMAL_H_INCLUDED
#include <string>
#include "../base/animal.hpp"

class mammal: public animal {
public:
	mammal();
	mammal(const mammal &p2);
	virtual ~mammal() override;
	virtual const std::string say() override;
	virtual mammal* clone() override;
	virtual void move() override {};
};

#endif
