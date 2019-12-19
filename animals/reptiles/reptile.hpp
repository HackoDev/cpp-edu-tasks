#ifndef REPTILE_H_INCLUDED
#define REPTILE_H_INCLUDED
#include <string>
#include "../base/animal.hpp"

class reptile: public animal {
public:
	reptile();
	reptile(const reptile &);
	virtual ~reptile() override;
	virtual const std::string say() override;

	virtual reptile* clone() override;
	virtual void move() override {};
};

#endif
