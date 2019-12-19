#ifndef BIRD_H_INCLUDED
#define BIRD_H_INCLUDED

#include "../base/animal.hpp"
#include <string>

class bird: public animal {
public:
	bird();
	bird(const bird &); 
	virtual ~bird();

	const std::string say() override;
	virtual void move() override;
	virtual bird* clone() override;
};

#endif