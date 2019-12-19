#ifndef GOLUB_H_INCLUDED
#define GOLUB_H_INCLUDED

#include "bird.hpp"
#include "../base/creator.hpp"
#include <string>

class golub: public creator<bird> {
public:
	golub();
	golub(const golub &); 
	golub(std::string n , int a): creator<bird>::creator(n, a) {}; 
	~golub();

	const std::string say() override;

	virtual void move() override;
	virtual golub* clone() override;
};

#endif