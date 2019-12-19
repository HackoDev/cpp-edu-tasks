#ifndef ZOO_H_INCLUDED
#define ZOO_H_INCLUDED
#include <string>
#include <vector>
#include "../base/animal.hpp"


class zoo {
public:
	zoo();
	zoo(const zoo &z) = delete;
	~zoo();

	void addAnimal(animal*);
	void walk();
private:
	std::vector<animal*> animals = {};
};

#endif
