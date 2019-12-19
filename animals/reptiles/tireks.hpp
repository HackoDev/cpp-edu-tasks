#ifndef TIREKS_H_INCLUDED
#define TIREKS_H_INCLUDED
#include <string>
#include "../base/creator.hpp"
#include "reptile.hpp"

class tireks: public creator<reptile> {
public:
	tireks();
	tireks(const tireks &);
	tireks(std::string n, int a): creator<reptile>::creator(n, a) {};
	virtual ~tireks() override;

	virtual const std::string say() override;

	virtual tireks* clone() override;
	virtual void move() override;
private:

	std::string name;
	int age;
};

#endif
